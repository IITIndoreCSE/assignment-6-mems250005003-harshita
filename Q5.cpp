





#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

     int n ; // number of random letters
    cout<<"Length: " ;
    cin >> n;
    char a[n];

    // generate random letters
    for (int i = 0; i < n; i++) {
        a[i] = 'a' + rand() % 26;
    }

    // print random letters
    cout << "Random letters: [";
    for (int i = 0; i < n; i++) {
        cout << "'" << a[i] << "'";
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;

    // bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                char t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    // print sorted letters
    cout << "Sorted letters: [";
    for (int i = 0; i < n; i++) {
        cout << "'" << a[i] << "'";
        if (i != n - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}











/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
