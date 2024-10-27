#include <iostream>
using namespace std;

int removeDuplicate(int nums[], int size) 
{
    if (size == 0) return 0;

    int insertIndex = 1; 
    for (int i = 1; i < size; i++) 
	{ 
        if (nums[i] != nums[i - 1]) 
		{
            nums[insertIndex] = nums[i];
            insertIndex++;
        }
    }
    return insertIndex; 
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int nums[size];
    cout << "Enter " << size << " sorted elements :" << endl;
    for (int i = 0; i < size; i++)
	{
        cin >> nums[i]; 
    }

    int newSize = removeDuplicate(nums, size);
    
    cout << "New size: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
	{
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

