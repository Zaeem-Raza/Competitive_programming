# Codeforces problem solution
# Function to check if an array can be sorted by reversing at most 'reverses' segments
def fun(size, array, rev):
    copy_array = array.copy()
    if rev == 1:
        if array != sorted(array):
            return False
    return True


t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    if fun(n, a, k):
        print("YES")
    else:
        print("NO")
