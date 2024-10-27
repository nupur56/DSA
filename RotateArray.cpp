#include <iostream>
using namespace std;

class Solution 
{
public:
    void rotate(int nums[], int n, int k) 
	{
        k %= n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }

    void reverse(int nums[], int start, int end) 
	{
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};

int main() 
{
    Solution solution;
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int nums[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> nums[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
	{
        cout << nums[i] << " ";
    }
    cout << endl;

    solution.rotate(nums, n, k);

    cout << "Rotated array by " << k << " positions: ";
    for (int i = 0; i < n; i++) 
	{
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}