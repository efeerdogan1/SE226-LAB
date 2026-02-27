print("Give me a large integer representing a total number of seconds")
userIn = int(input())

hours = userIn // 3600
remainingSeconds = userIn % 3600

minutes = remainingSeconds // 60
seconds = remainingSeconds % 60

print(f"{userIn} seconds is {hours} hours, {minutes} minutes, and {seconds} seconds.")