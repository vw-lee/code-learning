# Video Referene
# https://www.youtube.com/watch?v=iM3kjbbKHQU&t=82s&ab_channel=NeuralNine

import customtkinter
import tkinter

# root = tkinter.Tk()
# label = tkinter.Label(root, 1)
# label.pack()

customtkinter.set_appearance_mode("dark")
customtkinter.set_default_color_theme("dark-blue")

root = customtkinter.CTk()
root.geometry("500x350")

def login():
    print("Test")

frame = customtkinter.CTkFrame(master=root)
frame.pack(padx=60, pady=20, fill="both", expand=True)

label = customtkinter.CTkLabel(master=frame, text="Login System", text_font=("Arial", 24))
label.pack(padx=10, pady=12)

