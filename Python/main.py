#1
'''
a = float(int(input("Enter first side: ")))
b = float(int(input("Enter second side: ")))
c = float(int(input("Enter third side: ")))
s=(a+b+c)/2
area= ((s*(s-a)*(s-b)*(s-c))**0.5)
print(area)
'''

#2
'''
p = int(input("Enter 1st number: "))
q = int(input("Enter 2nd number: "))
#-
# temp=p
# p=q
# q=temp
#-
# p=p^q
# q=p^q
# p=p^q
#-
# p=p+q
# q=p-q
# p=p-q
#-
# p=p*q
# q=p//q
# p=p//q
print(p,q)
'''

#3
'''
n1=int(input("Enter 1st number: "))
n2=int(input("Enter 2nd number: "))
while(n2!=0):
    temp=n2
    n2=n1%n2
    n1=temp
print(n1)
'''

#4
'''
n=int(input("Enter num: "))
count=0
i=1
while(i<=n):
    if(n%i==0):
        count=count+1
    i+=1
if count==2:
    print("prime")
else:
    print("Not prime")
'''

#5
'''
num=int(input("Enter num: "))
n = num
sum=0
while(num>0):
    rem=num%10
    sum+=rem
    num=num//10
if(n % sum == 0):
    print("Harshad")
else:
    print("not Harshad")
'''

#6
'''
n=int(input("Enter the number: "))
sum=0
temp=n
while(temp>0):
    digit=temp%10
    sum+=digit**3
    temp//=10
if n==sum:
    print("Armstrong")
else:
    print("Not Armstrong")
'''

#7
'''
n=int(input("Enter the num: "))
temp=n
nstr=str(n)
len=len(nstr)
sumP=0
for i in range(len):
    dig=int(nstr[i])
    sumP+=dig**(i+1)
if(sumP==temp):
    print("Disarium")
else:
    print("Not Disarium")
'''

#8
'''
n=int(input("Enter the num: "))
b=""
while(n!=0):
    a=n%2
    b=str(a)+b
    n=n//2
print(b)
'''

#9
# ...

#10
'''
r=4
for i in range(r):
    for j in range(r-i-1):
        print(" ",end="")
    for k in range(2*i+1):
        print("*",end=" ")
    print()
'''

#11
'''
n=input("Enter the num: ")
dec =0
for i in range(len(n)):
    dig=int(n[len(n)-1-i])
    dec+=dig*(2**i)
print(dec)
'''

# 18
'''
def fib(n):
    if n<=1:
        return n
    else:
        return fib(n-1)+fib(n-2)

n=int(input("Enter the num: "))
if(n<=0):
    print("Enter valid value")
else:
    for i in range(n):
        print(fib(i),end=" ")
    print()
'''

# 19
'''
def DecToHec(n):
    if n==0:
        return "0"
    hex="0123456789ABCDEF"
    result=""
    num=n
    while(num>0):
        rem=num%16
        result=hex[rem]+result
        num//=16
    return result

n=int(input("Enter the num: "))
value = DecToHec(n)
print(value)
'''



# import tkinter as tk

# def greet():
#     print("Hello, User!")

# root = tk.Tk()
# root.title("Simple GUI")
# btn = tk.Button(root, text="Greet", command=greet)
# btn.pack()
# root.mainloop()




'''
import tkinter as tk

def click(btn):
    if btn == '=':
        try:
            entry.set(eval(entry.get()))
        except:
            entry.set('Error')
    elif btn == 'C':
        entry.set('')
    else:
        entry.set(entry.get() + btn)

# GUI setup
root = tk.Tk()
root.title("Calculator")

entry = tk.StringVar()
tk.Entry(root, textvariable=entry).grid(row=0, column=0, columnspan=4)

buttons = [
    '7','8','9','/',
    '4','5','6','*',
    '1','2','3','-',
    '0','C','=','+'
]

row = 1
col = 0
for b in buttons:
    tk.Button(root, text=b, width=5, height=2, command=lambda x=b: click(x)).grid(row=row, column=col)
    col += 1
    if col > 3:
        col = 0
        row += 1

root.mainloop()
'''



import tkinter as tk

def on_click():
    print("Button clicked!")

root = tk.Tk()
btn = tk.Button(root, text="Click Me", command=on_click)
btn.pack()
root.mainloop()
