import requests
import os
from datetime import datetime

def get_weather_data(location, api_key):
    """Fetch weather data from OpenWeatherMap API."""
    base_url = "https://api.openweathermap.org/data/2.5/weather"
    params = {
        'q': location,
        'appid': api_key,
    }
    try:
        response = requests.get(base_url, params=params)
        response.raise_for_status()  # Raise an HTTPError for bad responses
        return response.json()
    except requests.RequestException as e:
        print(f"Error fetching weather data: {e}")
        return None

def display_weather(data, location):
    """Display weather data."""
    if data is None:
        print("Failed to retrieve data.")
        return

    try:
        temp_city = data['main']['temp'] - 273.15
        weather_desc = data['weather'][0]['description']
        hmdt = data['main']['humidity']
        wind_spd = data['wind']['speed']
        date_time = datetime.now().strftime("%d %b %Y | %I:%M:%S %p")

        print("-------------------------------------------------------------")
        print(f"Weather Stats for - {location.upper()}  || {date_time}")
        print("-------------------------------------------------------------")
        print(f"Current temperature is: {temp_city:.2f} deg C")
        print(f"Current weather description: {weather_desc}")
        print(f"Current Humidity: {hmdt} %")
        print(f"Current wind speed: {wind_spd} kmph")
    except KeyError as e:
        print(f"Missing data in the API response: {e}")

def main():
    """Main function to execute the script."""
    user_api = os.getenv('current_weather_data')
    if not user_api:
        print("Error: Environment variable 'current_weather_data' not set.")
        return

    location = input("Enter the city name: ")
    api_data = get_weather_data(location, user_api)
    display_weather(api_data, location)

if __name__ == "_main_":
    main()

