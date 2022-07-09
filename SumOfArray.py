from random import randint

def sum(arr, size):
    if size == 0:
        return arr[size]
    else:
        return arr[size] + sum(arr,size-1)

if __name__ == "__main__":
    n = int(input("Enter Size Of Array : "))
    arr = []
    for i in range(n):
        arr.append(randint(0,100))
    for i in arr:
        print(i,end=" ")
    print()
    print("Sum Of Array is ",sum(arr,n-1))
