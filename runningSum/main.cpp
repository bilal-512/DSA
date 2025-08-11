#include <iostream>
#include <vector>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result;
    int runningSum = 0;
    if (n == 0)
        return result; // Return empty vector if input is empty
    for (int i = 0; i < n; i++)
    {
        runningSum += nums[i];
        result.push_back(runningSum);
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = runningSum(nums);
    cout << result.size() << endl; // Print the size of the result vector
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
