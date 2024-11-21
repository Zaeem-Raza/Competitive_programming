def count_full_stops(str):
    count = 0
    for i in range(len(str)):
        if str[i] == '.':
            count += 1
    return count

def fun(str):
    if '...' in str:
        return 2
    return count_full_stops(str)


test_cases=int(input())
for i in range(test_cases):
    size=int(input())
    str = input()
    print(fun(str))