#include <iostream>
using namespace std;

int search(int arr[], int l, int r, int x)
{
    if (r < l)
        return -1;
    int mid = (l + r) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return search(arr, l, mid - 1, x);
    else
        return search(arr, mid + 1, r, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = search(arr, 0, n - 1, x);
    cout << index << endl;
    return 0;
}