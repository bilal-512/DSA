#include<iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
    for (int i =0 ; i< size; i++) {
        for (int j = 0;j< size; j++){
            if (arr[j+1] < arr[j]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

}

int main () {
    int arr[7] = {3,7,1,4,2,9,8};
    bubbleSort(arr, 7);
    for (int i =0; i < 7; i++) {
        cout << arr[i]<< " ";
    }


    return 0;
}