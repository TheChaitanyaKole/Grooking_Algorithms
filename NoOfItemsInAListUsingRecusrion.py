from random import randint
import time

def length(list):
    if list:
        return 1 + length(list[1:])
    else:
        return 0

if __name__ == "__main__":
    list = []
    for i in range(randint(0,15)):
        list.append(randint(0,100))
    for i in list:
        print(i,end=" ",flush=True)
        time.sleep(0.1)
    print()
    leng = length(list)
    print("length of list is : ",leng)
