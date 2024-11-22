def fun(nums,size):
    if nums[0] != 1:
        return "NO"
    nums=sorted(nums)
    if nums[-1] != size:
        return "No"
    return "YES"



test_cases = int(input())
for i in range(test_cases):
    size = int(input())
    nums = list(map(int,input().split()))
    print(fun(nums,size))
    