#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        // Shift elements to the right
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert temp at correct position
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[5] = {4, 6, 2, 3, 8};
    sort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
