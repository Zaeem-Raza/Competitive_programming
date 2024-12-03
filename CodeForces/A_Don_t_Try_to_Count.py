def fun(x,s):
    if s in x:
        return 0
    x+=x
    if s in x:
        return 1
    else:
        i = 1
        while(len(x)<=len(s)):
            x+=x
            i+=1
            if(s in x):
                return i
        if(s in x):
            return i
        x+=x
        i+=1
        if(s in x):
            return i
        else:
            return -1
        
        


test_cases = int(input())  
for _ in range(test_cases):
    a, b = map(int, input().split())  
    x = input()
    s = input()
    print(fun(x,s))

    