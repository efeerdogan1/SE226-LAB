# Task 1 – Digital Root Sequence
num = int(input("Enter a number greater than 9: "))

steps = 0
print(num, end="")

while num >= 10:
    temp = num
    digit_sum = 0

    while temp > 0:
        digit_sum += temp % 10
        temp //= 10

    num = digit_sum
    print(" ->", num, end="")
    steps += 1

print()
print("Final value:", num)
print("Total steps:", steps)


# Task 2 – FizzBuzz Counter
userInN = 0
while userInN < 10 or userInN > 100:
    userInN = int(input("Give me a positive Integer between 10 and 100: "))

FizzCounter = 0
BuzzCounter = 0
FizzBuzz = 0

for i in range(1, userInN + 1):

    if i % 7 == 0:
        continue

    if i % 3 == 0 and i % 5 == 0:
        print("FizzBuzz")
        FizzBuzz += 1
    elif i % 3 == 0:
        print("Fizz")
        FizzCounter += 1
    elif i % 5 == 0:
        print("Buzz")
        BuzzCounter += 1
    else:
        print(i)

print(f"Summary : Fizz Counter {FizzCounter} , Buzz Counter {BuzzCounter} , FizzBuzz Counter {FizzBuzz}")


# Task 3
userIn = 0
while userIn < 3 or userIn > 9:
    userIn = int(input("Give me a positive Integer between 3 and 9: "))

for i in range(1, userIn + 1):
    for j in range(1, i + 1):
        print(j, end="")
    print()

for i in range(userIn - 1, 0, -1):
    for j in range(1, i + 1):
        print(j, end="")
    print()
