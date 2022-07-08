from random import randint

def smallest(list):
    small = list[0]
    small_index = 0
    for i in range(1,len(list)):
        if list[i] < small:
            small = list[i]
            small_index = i
    return small_index

def selectionsort(list):
    arr = []
    for i in range(len(list)):
        small = smallest(list)
        arr.append(list.pop(small))
    return arr

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
        list.append(randint(0,100))
    list = selectionsort(list)
    for i in list:
        print(i,end="   ")
    print()
    to_search = int(input("Enter Number to Search : "))
    result = binary_search(list,to_search)
    print(to_search , " fount at position : " , result)
