#include <iostream>
using namespace std;

int findSingle(int arr[], int size) 
{
    int unique = 0;
    for (int i = 0; i < size; i++) 
	{
        unique ^= arr[i];
    }
    return unique; 
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
	{
        cin >> arr[i];
    }
    cout << "The element that appears only once is: " << findSingle(arr, size) << endl;
    delete[] arr;

    return 0;
}