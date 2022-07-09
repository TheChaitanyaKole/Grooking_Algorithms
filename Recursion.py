import time

def printf(n):
    if n == 0:
        return
    else:
        time.sleep(0.1)
        print(n,end=" ",flush=True)
        printf(n-1)

def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n-1)


if __name__ == "__main__":
    n = int(input("Enter a number : "))
    printf(n)
    print()
    print(fact(n))
