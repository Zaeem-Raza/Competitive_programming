def fun(num):
    if (num+1) %3 == 0 or (num-1) %3 == 0:
        print("First")
    else:
        print("Second")


test = int(input())
for _ in range(test):
    n = int(input())
    fun(n)
