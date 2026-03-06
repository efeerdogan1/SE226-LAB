import math

print("Distance Calculator")
print("Give me first coordinate's x")
firstX = int(input())

print("Give me first coordinate's y")
firstY = int(input())

print("Give me second coordinate's x")
secondX = int(input())

print("Give me second coordinate's y")
secondY = int(input())

distance = math.sqrt(((secondX - firstX) ** 2) + ((secondY - firstY) ** 2))
print(f"The distance between two points is {distance}")
