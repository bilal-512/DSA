#include <iostream>
using namespace std;
void reverse(int arr[], int size) {
    int start = 0;
    while (start<=size-1){
        swap(arr[start], arr[size-1]);
        start++;
        size--;
    }
}

int main () {
 int arr [5] = {1,2,3,4,5};
 reverse(arr, 5);
 for (int i = 0; i<5; i++){
    cout << arr[i] << " ";
 }



    return 0;
}
