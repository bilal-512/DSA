#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        int positiveSum = 0;
        int negativeSum = 0;
        int totalSum = 0;
        for (int num : nums)
        {
            if (num > 0)
            {
                positiveSum += num; // Update the left sum with positive numbers
            }
            else
            {
                negativeSum += positiveSum + num; // Update the negative sum with the current left sum and negative number
            }
        }
        totalSum = positiveSum + negativeSum; // Calculate the total sum
        if (totalSum < 1)
        {
            return abs(totalSum) + 1; // If total sum is less than 1, return the difference to make it at least 1
        }

        else
        {
            return 1; // If total sum is at least 1, return 1 as the minimum start value
        }
    }
};