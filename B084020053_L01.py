# 練習時間
# Question:
# Write a program to introduce user by their type.
# Step 1: Please let user enter their name,birth year,weight and height.
# Step 2: Print a title "This is my first practice in python class."
# Step 3: Print your name with user input.
# Step 4: Print your age with user input.
# Step 5: Print User BMI
# Bonus.
# Please calculate how many chars are in the Question string.
name = input("please enter your name: ")
old = 2021-int(input("please enter your birth year: "))

weight = float(input("please enter your weight in kg: "))
height = float(input("please enter your height in m: "))
print("This is my first practice in python class.")
print("My name is "+name)
print("I am "+str(old)+" years old")
bmi=weight/height**2
print("My MBI number is "+str(bmi))
number=len("This is my first practice in python class.")
print("Title has "+str(number)+" units long")
