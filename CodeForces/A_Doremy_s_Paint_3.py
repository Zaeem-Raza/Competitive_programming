def fun(array, size):
    return 0


test_cases = int(input())
for _ in range(test_cases):
    size = int(input())
    array = list(map(int, input().split()))
    result = fun(array, size)
    print(result)
