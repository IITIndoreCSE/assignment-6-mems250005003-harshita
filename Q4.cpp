




#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i + 1; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cout<<"Length of Array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Array: [";
    for (int i = 0; i < n; i++) 
    {
        if(i!=n-1)
        {
            
        
        cout<<arr[i]<<",";
        }
        else 
        cout<<arr[i];
    }
    cout<<"]"<<endl;
    
    cout<<"Search: ";
    int key;
    cin >> key;

    int pos = search(arr, n, key);

    if (pos == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at position: " << pos << endl;
    }

    return 0;
}

















/* Test Case 1
Input:
Array: [1, 3, 5, 7, 9]
Search: 5
Output:
Found at position: 2
Test Case 2
Input:
Array: [2, 4, 6, 8]
Search: 7
Output:
Not found */

