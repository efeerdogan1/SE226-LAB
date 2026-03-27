numOfUsers = int(input("Enter the number of users: "))

nestedDict = {}
commonItems = {}
uniqueItems = set()

def printUserData(nestedDict):
    print("USER DATA:")
    for key, value in nestedDict.items():
        print(f"{key} -> {value}")

def findCommonItem(commonItems):
    print("COMMON ITEMS:")
    found = False
    for item, count in commonItems.items():
        if count > 1:
            print(item)
            found = True
    if not found:
        print("No common items")

def findUniqueItems(commonItems):
    print("UNIQUE ITEMS:")
    found = False
    for item, count in commonItems.items():
        if count == 1:
            print(item)
            found = True
    if not found:
        print("No unique items")

def findMostPopularItems(commonItems):
    print("MOST POPULAR ITEM:")
    if len(commonItems) == 0:
        print("No items")
        return

    maxCount = max(commonItems.values())
    for item, count in commonItems.items():
        if count == maxCount:
            print(item)

for i in range(numOfUsers):
    userName = input("Enter the username: ")
    itemCount = int(input("How many items you want to enter? "))

    itemList = []
    userSet = set() 

    for j in range(itemCount):
        item = input(f"Item {j + 1}: ")
        itemList.append(item)
        userSet.add(item)

    nestedDict[userName] = itemList

    for item in userSet:
        if item not in commonItems:
            commonItems[item] = 1
        else:
            commonItems[item] += 1

        uniqueItems.add(item)

printUserData(nestedDict)
findCommonItem(commonItems)
findUniqueItems(commonItems)
findMostPopularItems(commonItems)