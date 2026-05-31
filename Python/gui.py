import tkinter as tk

w = tk.Tk()
w.title("Registration Form")
w.geometry("600x600")
w.configure(bg="dark blue")

tk.Label(w, text="First Name").grid(row=1, column=0,)
FName = tk.Entry(w)
FName.grid(row=1, column=1)

tk.Label(w, text="Last Name").grid(row=1, column=2)
LName = tk.Entry(w)
LName.grid(row=1, column=3)

tk.Label(w, text="Email").grid(row=2, column=0)
email = tk.Entry(w, width=30)
email.grid(row=2, column=1, columnspan=3)

tk.Label(w, text="Mobile").grid(row=3, column=0)
mobile= tk.Entry(w)
mobile.grid(row=3, column=1)

tk.Label(w, text="Gender").grid(row=4, column=0)
MRadio = tk.Radiobutton(w, text="Male")
FRadio = tk.Radiobutton(w, text="Female")
MRadio.place(x=100,y=62)
FRadio.place(x=300,y=62)

tk.Label(w, text="Password").grid(row=6, column=0)
password = tk.Entry(w)
password.grid(row=6, column=1)
tk.Label(w, text="Password").grid(row=7, column=1)

tk.Label(w, text="Confirm Password").grid(row=8, column=0)
CPass = tk.Entry(w)
CPass.grid(row=8, column=1)

submit= tk.Button(w, text="Submit")
submit.place(x=100,y=160)
submit.configure(bg="red")

w.mainloop()
