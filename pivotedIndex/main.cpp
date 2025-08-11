#include<iostream>
#include <vector>
using namespace std;
int povitedIndex(vector<int> &nums) {
    int n = nums.size();
    int totalSum = 0; 
    int leftSum = 0;
    int rightSum = 0;
    for (int num : nums) {
        totalSum += num; // Calculate the total sum of the array
    }
    for (int i = 0; i < n; i++) {
        rightSum = totalSum - leftSum - nums[i]; // Calculate the right sum
        if (leftSum == rightSum) {
            return i; // If left sum equals right sum, return the index
        }
        leftSum += nums[i]; // Update the left sum
    }
    return -1; // If no pivot index found, return -1
}
int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Input array: ";
    int pivotIndex = povitedIndex(nums);
    cout << "Pivot index: " << pivotIndex << endl;
    return 0;
}
