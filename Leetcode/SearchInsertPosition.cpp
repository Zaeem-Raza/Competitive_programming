// Leetcode
#include <iostream>
using namespace std;
int searchInsert(int nums[], int size, int target)
{
    int low = 0;
    int high = size;
    int mid;
    if (target > nums[high - 1])
    {
        return high;
    }
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }

        if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    int arr[] = {1, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int index = searchInsert(arr, size, target);
    std::cout << index;
}