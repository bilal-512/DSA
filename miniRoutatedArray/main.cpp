#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int> &nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] > nums[end]) {
            // Minimum is in right half
            start = mid + 1;
        } else {
            // Minimum is in left half (including mid)
            end = mid;
        }
    }
    return start; // 'start' will be the index of the minimum element
}

int main()
{
    vector<int > nums = {3,4,5,1,2};
    cout << findMin(nums);
    return 0;
}