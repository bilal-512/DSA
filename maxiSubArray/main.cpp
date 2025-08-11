#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int maxSum = nums[0];
    int currentSum = 0;
    for (int i = 0; i < n ; i++) {
        currentSum = max(nums[i], currentSum + nums[i]); //always ask the qestion that if sum is less then 0 then should i start a new subarray or not
        //if currentSum is less than 0 then we start a new subarray from the next element
        //if currentSum is greater than 0 then we can continue adding to the current subarray
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}


int main (){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}