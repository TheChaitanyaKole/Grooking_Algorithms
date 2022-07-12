from random import randint

def mini(arr,size):
    if size == 1:
        return arr[0]
    else:
        return min(arr[size], mini(arr,size-1))

def maxi(arr,size):
    if size == 1:
        return arr[0]
    else:
        return max(arr[size], maxi(arr,size-1))

if __name__ == "__main__":
    n = int(input("Enter Size Of Array : "))
    arr = []
    for i in range(n):
        arr.append(randint(0,100))
    for i in arr:
        print(i,end=" ")
    print()
    print("Min Element Of Array is ",mini(arr,n-1), " Max Element Of Array is ",maxi(arr,n-1))
