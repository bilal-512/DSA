#include <iostream>
#include <vector>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return false;
    for (int i =0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true; //if we find a duplicate, we return true
            }
        }
    }
    return false; //if no duplicates found, we return false
}


int main () {

    return 0;
}