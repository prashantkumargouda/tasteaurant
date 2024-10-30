from tkinter import *
from PIL import Image , ImageTk
import os



root = Tk()
root.geometry("400x400")

x_cord = 0
y_cord = 0


files = os.listdir(r"C:\code\home\Python")
for file in files :
    if file.endswith(".jpeg") or file.endswith(".jpg") or file.endswith(".png") :
        image = Image.open(file)
        resize = image.resize((50,50))

        photo = ImageTk.PhotoImage(resize)

        lab = Label( image = photo )
        lab.pack()

        x_cord += 50

root.mainloop()