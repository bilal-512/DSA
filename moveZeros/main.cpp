#include<iostream>
using namespace std;
void moveZero(int arr[], int size){
    int nonZero = 0;
    for (int i = 0; i<size; i++){
        if(arr[i]!= 0){
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}

int main() {
    int arr[6] = {1,0,4,0,5,0};
    moveZero(arr, 6);
    for (int i = 0; i < 6; i++){
        cout << arr[i];
    }
    return 0;
}