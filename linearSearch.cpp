#include <iostream>
#include <ctime>

using namespace std;

int const SIZE = 100;

int LinearSearch(int value , int arr[SIZE]) {

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == value)
            return i;
    }
    return -1;
}
    int main(void) {
    int ww, number;
    int const SIZE = 100;
    int arr[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 10;
    cout << "insert the number___" << endl;
    cin >> number;
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << endl;
    ww = LinearSearch(number, arr);
    cout << "LinearSearch = " << ww << endl;
    return 0;
    }
