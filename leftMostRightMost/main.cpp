#include <iostream>
using namespace std;

int leftMost(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;  

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;      
           
            end = mid - 1;  
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}


int rightMost(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;  // -1 means not found

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;       // Save index
            start = mid + 1; // Move right to find later occurrence
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[7] = {0, 1, 1, 2, 3, 3, 4};
    cout <<"Left most " <<  leftMost(arr, 7, 3); 
    cout << endl;
    cout << "Right most " << rightMost(arr, 7, 3);
    return 0;
}
