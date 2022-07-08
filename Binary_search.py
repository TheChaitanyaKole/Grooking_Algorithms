from random import randint

def binary_search(list,to_search):
    low = 0
    high = len(list) - 1
    mid = 0

    while low <= high:
        mid = (high + low) // 2

        if list[mid] < to_search:
            low = mid + 1
        elif list[mid] > to_search:
            high = mid - 1
        else:
            return mid
    return -1


if __name__ == '__main__':
    numbers = int(input("Enter Array Size : "))
    list = []
    for i in range(numbers):
        list.append(randint(0,150))
    list.sort()
    for i in list:
        print(i,end="   ")
    print()
    to_search = int(input("Enter Number to Search : "))
    result = binary_search(list,to_search)
    print(to_search , " fount at position : " , result)
