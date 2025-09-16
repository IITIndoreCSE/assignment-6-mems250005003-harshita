
#include <iostream>
using namespace std;

int* join(int a[], int n1, int b[], int n2) {
    int* c = new int[n1 + n2]; 

    for (int i = 0; i < n1; i++) {
        c[i] = a[i];
    }
    for (int j = 0; j < n2; j++) {
        c[n1 + j] = b[j];
    }

    return c; 
}

int main() {
    int n1, n2;

    cout<<"Length of Array1: ";
    cin >> n1;
    int a[n1];
    for (int i = 0; i < n1; i++) cin >> a[i];
     // print array1
    cout << "Array1: [";
    for (int i = 0; i < n1; i++) {
        cout << a[i];
        if (i != n1 - 1) cout << ", ";
    }
    cout << "]" << endl;

    cout<<"Length of Array2: ";
    cin >> n2;
    int b[n2];
    for (int i = 0; i < n2; i++) cin >> b[i];

   

   
    cout << "Array2: [";
    for (int i = 0; i < n2; i++) {
        cout << b[i];
        if (i != n2 - 1) cout << ", ";
    }
    cout << "]" << endl;

    int* c = join(a, n1, b, n2);

    
    cout << "Joined Array: [";
    for (int i = 0; i < n1 + n2; i++) {
        cout << c[i];
        if (i != n1 + n2 - 1) cout << ", ";
    }
    cout << "]" << endl;

    delete[] c; 
    return 0;
}





















/* Test Case 1
Input:
Array1: [1, 2, 3]
Array2: [4, 5]
Output:
Joined Array: [1, 2, 3, 4, 5]
Test Case 2
Input:
Array1: [10, 20]
Array2: [30, 40, 50]
Output:
Joined Array: [10, 20, 30, 40, 50] */
