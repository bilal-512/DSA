#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int currentSum = 0;
        for (int num : nums) {
            currentSum += num;
            if (currentSum == k || num == k) {
                count++;
                currentSum = 0; // Reset current sum after finding a valid subarray
            }
            if (currentSum > k ){
                currentSum = 0; // Reset current sum if it exceeds k
            }

        }
        return count;
        
    }
};