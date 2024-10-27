#include <iostream>
using namespace std;

bool Sorted(const int arr[], int n)
{
    if (n == 1 || n == 0)
        return true;
    return arr[n - 1] >= arr[n - 2] && Sorted(arr, n - 1);
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << (Sorted(arr, size) ? "Yes\n" : "No\n");
    delete[] arr;

    return 0;
}