#include  <iostream>
using namespace std;

int search(int arr[], int x, int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = search(arr, x, n);
    cout << index << endl;
    return 0;
}