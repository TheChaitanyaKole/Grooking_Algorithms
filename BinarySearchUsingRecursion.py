from random import randint
import time

def binary_search(list,to_search,low,high):
    time.sleep(1)
    if low < high:
        mid = (high + low) // 2
        print("to_search : ",to_search, " low : " ,low, " high : " ,high, " mid : ",mid)
        if list[mid] < to_search:
            time.sleep(1)
            print(list[mid])
            return binary_search(list,to_search,mid+1,high)
        elif list[mid] > to_search:
            time.sleep(1)
            print(list[mid])
            return binary_search(list,to_search,low,mid-1)
        else:
            return mid
    return -1


if __name__ == '__main__':
    numbers = int(input("Enter Array Size : "))
    list = []
    for i in range(numbers):
        list.append(randint(0,100))
    list.sort()
    for i in list:
        print(i,end=" ")
    print()
    to_search = int(input("Enter Number to Search : "))
    result = binary_search(list,to_search,0,numbers)
    print(to_search , " fount at position : " , result)
