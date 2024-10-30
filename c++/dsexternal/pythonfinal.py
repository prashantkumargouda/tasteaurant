import tkinter as tk
from tkinter import messagebox

# Constants for traffic light colors
RED = "red"
GREEN = "green"
YELLOW = "yellow"
OFF = "grey"

# Timing in milliseconds
BASE_GREEN_DURATION = 5000  # Base green duration in milliseconds
YELLOW_DURATION = 2000      # Yellow light duration in milliseconds

class TrafficLight:
    def __init__(self, canvas, x, y, name, is_horizontal=False):
        self.canvas = canvas
        self.name = name
        self.x = x
        self.y = y
        self.is_horizontal = is_horizontal

        if self.is_horizontal:
            # Create horizontal traffic light
            self.red_light = self.canvas.create_oval(x, y, x + 30, y + 30, fill=OFF)
            self.yellow_light = self.canvas.create_oval(x + 40, y, x + 70, y + 30, fill=OFF)
            self.green_light = self.canvas.create_oval(x + 80, y, x + 110, y + 30, fill=OFF)
            self.label = self.canvas.create_text(x + 55, y + 40, text=name)
        else:
            # Create vertical traffic light
            self.red_light = self.canvas.create_oval(x, y, x + 30, y + 30, fill=OFF)
            self.yellow_light = self.canvas.create_oval(x, y + 40, x + 30, y + 70, fill=OFF)
            self.green_light = self.canvas.create_oval(x, y + 80, x + 30, y + 110, fill=OFF)
            self.label = self.canvas.create_text(x + 15, y + 130, text=name)

    def set_state(self, color):
        if color == RED:
            self.canvas.itemconfig(self.red_light, fill=RED)
            self.canvas.itemconfig(self.yellow_light, fill=OFF)
            self.canvas.itemconfig(self.green_light, fill=OFF)
        elif color == YELLOW:
            self.canvas.itemconfig(self.red_light, fill=OFF)
            self.canvas.itemconfig(self.yellow_light, fill=YELLOW)
            self.canvas.itemconfig(self.green_light, fill=OFF)
        elif color == GREEN:
            self.canvas.itemconfig(self.red_light, fill=OFF)
            self.canvas.itemconfig(self.yellow_light, fill=OFF)
            self.canvas.itemconfig(self.green_light, fill=GREEN)
        else:
            # Turn off all lights
            self.canvas.itemconfig(self.red_light, fill=RED)
            self.canvas.itemconfig(self.yellow_light, fill=OFF)
            self.canvas.itemconfig(self.green_light, fill=OFF)

class TrafficManagementSystem(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Traffic Management System")
        self.geometry("800x600")

        # Create canvas
        self.canvas = tk.Canvas(self, width=800, height=500, bg="white")
        self.canvas.pack()

        # Create traffic lights (East and West signals are horizontal)
        self.north_light = TrafficLight(self.canvas, 370, 50, "North")
        self.east_light = TrafficLight(self.canvas, 520, 230, "East", is_horizontal=True)
        self.south_light = TrafficLight(self.canvas, 370, 350, "South")
        self.west_light = TrafficLight(self.canvas, 140, 230, "West", is_horizontal=True)

        # Vehicle counts for each direction
        self.vehicle_counts = {'North': 0, 'East': 0, 'South': 0, 'West': 0}

        # Emergency direction selection
        self.emergency_direction = tk.IntVar(value=-1)  # -1 means no emergency selected

        # Input fields for vehicle counts and emergency vehicle status
        self.create_vehicle_input()

        # Variables to keep track of current state
        self.current_direction = None
        self.is_running = False

        # Start button
        self.start_button = tk.Button(self, text="Start Simulation", command=self.start_simulation)
        self.start_button.pack(pady=10)

    def create_vehicle_input(self):
        # Frame for vehicle input
        input_frame = tk.Frame(self)
        input_frame.pack(pady=10)

        # North
        tk.Label(input_frame, text="North Vehicles:").grid(row=0, column=0)
        self.north_input = tk.Entry(input_frame, width=5)
        self.north_input.grid(row=0, column=1)

        # East
        tk.Label(input_frame, text="East Vehicles:").grid(row=1, column=0)
        self.east_input = tk.Entry(input_frame, width=5)
        self.east_input.grid(row=1, column=1)

        # South
        tk.Label(input_frame, text="South Vehicles:").grid(row=2, column=0)
        self.south_input = tk.Entry(input_frame, width=5)
        self.south_input.grid(row=2, column=1)

        # West
        tk.Label(input_frame, text="West Vehicles:").grid(row=3, column=0)
        self.west_input = tk.Entry(input_frame, width=5)
        self.west_input.grid(row=3, column=1)

        # Emergency Direction Selection (Radio buttons)
        tk.Label(input_frame, text="Emergency Direction:").grid(row=0, column=2, rowspan=4, padx=20)

        self.north_emergency = tk.Radiobutton(input_frame, text="North", variable=self.emergency_direction, value=0)
        self.north_emergency.grid(row=0, column=3)

        self.east_emergency = tk.Radiobutton(input_frame, text="East", variable=self.emergency_direction, value=1)
        self.east_emergency.grid(row=1, column=3)

        self.south_emergency = tk.Radiobutton(input_frame, text="South", variable=self.emergency_direction, value=2)
        self.south_emergency.grid(row=2, column=3)

        self.west_emergency = tk.Radiobutton(input_frame, text="West", variable=self.emergency_direction, value=3)
        self.west_emergency.grid(row=3, column=3)

        # Button to update vehicle counts
        self.update_button = tk.Button(input_frame, text="Update Vehicle Counts", command=self.update_vehicle_counts)
        self.update_button.grid(row=4, column=0, columnspan=4, pady=5)

    def update_vehicle_counts(self):
        # Get vehicle counts from input fields
        try:
            north_count = int(self.north_input.get())
            east_count = int(self.east_input.get())
            south_count = int(self.south_input.get())
            west_count = int(self.west_input.get())

            self.vehicle_counts['North'] = north_count
            self.vehicle_counts['East'] = east_count
            self.vehicle_counts['South'] = south_count
            self.vehicle_counts['West'] = west_count

            # Show confirmation message
            messagebox.showinfo("Vehicle Counts Updated", "Vehicle counts and emergency direction have been updated.")
        except ValueError:
            messagebox.showerror("Invalid Input", "Please enter valid integer values for vehicle counts.")

    def start_simulation(self):
        if not self.is_running:
            self.is_running = True
            self.start_button.config(state=tk.DISABLED)
            self.simulate_traffic()

    def simulate_traffic(self):
        # Check for emergency vehicles first
        if self.emergency_direction.get() != -1:
            # Map the emergency direction to the corresponding name
            emergency_direction_name = ['North', 'East', 'South', 'West'][self.emergency_direction.get()]
            self.reset_lights()
            # Allow vehicles in all directions except the emergency direction
            for direction in self.vehicle_counts.keys():
                if direction != emergency_direction_name:
                    self.set_light(direction, GREEN)
            self.set_light(emergency_direction_name, RED)
            # Clear the emergency direction after serving it
            self.emergency_direction.set(-1)
            self.after(BASE_GREEN_DURATION, self.finish_current_direction)
            return

        # Check if any vehicles are left
        if all(count == 0 for count in self.vehicle_counts.values()):
            messagebox.showinfo("Simulation Complete", "No more vehicles waiting.")
            self.reset_lights()
            self.is_running = False
            self.start_button.config(state=tk.NORMAL)
            return

        # Find the direction with the highest number of vehicles
        max_vehicles = max(self.vehicle_counts.values())
        directions_with_max = [direction for direction, count in self.vehicle_counts.items() if count == max_vehicles]
        # For simplicity, pick the first one
        self.current_direction = directions_with_max[0]

        # Allow all directions except the one with the highest number of vehicles
        self.reset_lights()
        for direction in self.vehicle_counts.keys():
            if direction != self.current_direction:
                self.set_light(direction, GREEN)

        # Schedule to change the other lights to yellow after green duration
        self.after(BASE_GREEN_DURATION, self.change_to_yellow)

    def change_to_yellow(self):
        # Change the other directions' lights to yellow
        for direction in self.vehicle_counts.keys():
            if direction != self.current_direction:
                self.set_light(direction, YELLOW)

        # Schedule to proceed to next direction after yellow duration
        self.after(YELLOW_DURATION, self.finish_current_direction)

    def finish_current_direction(self):
        # Reduce the vehicle count for the current direction to zero
        self.vehicle_counts[self.current_direction] = 0

        # Reset lights and continue simulation
        self.reset_lights()
        self.simulate_traffic()

    def set_light(self, direction, color):
        if direction == 'North':
            self.north_light.set_state(color)
        elif direction == 'East':
            self.east_light.set_state(color)
        elif direction == 'South':
            self.south_light.set_state(color)
        elif direction == 'West':
            self.west_light.set_state(color)

    def reset_lights(self):
        # Turn off all lights
        self.north_light.set_state(OFF)
        self.east_light.set_state(OFF)
        self.south_light.set_state(OFF)
        self.west_light.set_state(OFF)

if __name__ == "__main__":
    app = TrafficManagementSystem()
    app.mainloop()

