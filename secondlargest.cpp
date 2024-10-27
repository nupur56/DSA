#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n; 

    int largest = INT_MIN, secondLargest = INT_MIN;
    int num;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) 
	{
        cin >> num; 
        if (num > largest) 
		{
            secondLargest = largest;
            largest = num; 
        } else if (num > secondLargest && num < largest) 
		{
            secondLargest = num;
        }
    }

    if (secondLargest == INT_MIN) 
	{
        cout << "There is no second largest number." << endl; 
    } 
	else 
	{
        cout << "The second largest number is: " << secondLargest << endl; 
    }

    return 0; 
}
