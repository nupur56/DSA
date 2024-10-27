#include <iostream>
using namespace std;

int missingNo(int n, int arr[]) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    int expectedSum = (n * (n + 1)) / 2;
    return expectedSum - sum;
}

int main() {
    int n;

    cout << "Enter the total number of elements (including the missing number): ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n - 1 << " elements (from 1 to " << n << " with one missing):" << endl;
    
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i]; 
    }

    cout << "The missing number in the given array is: " << missingNo(n, arr) << endl;

    return 0;
}

