#include <iostream>

using namespace std;

int const SIZE = 100;
static int BinarySearch(int value, int array) {
    int right= SIZE - 1; int left= 0;
     int mid = (right + left) / 2;
    if (array[mid] == value)
        return mid;
    else if (value < array[mid])
        BinarySearch(int value, int arr[100], int left, int mid-1 )
    else if (value > arr[mid])
        BinarySearch(int value, int arr[100], int right, int mid+1 )

    else if (right <= left)
        return -1;
}
int main(void) {
    int ww, number;
    int const SIZE = 100;
    int arr[SIZE];
    srand(time_t (NULL));
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 10;
    cout << "insert the number___" << endl;
    cin >> number;
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    ww = BinarySearch(number, arr, mid);
    cout << "BinarySearch = " << ww << endl;
    return 0;
}
