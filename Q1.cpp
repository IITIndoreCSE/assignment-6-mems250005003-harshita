
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    void input() {
        char sign, i;
        cin >> real >> sign >> imag >> i;
        if (sign == '-') imag = -imag; 
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i";
        else
            cout << real << " - " << -imag << "i";
    }
};

// Function to add two complex numbers
Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    Complex c1, c2, sum, diff;

    cout << "Complex Number 1 = ";
    c1.input();
    cout << "Complex Number 2 = ";
    c2.input();

    sum = add(c1, c2);
    diff = subtract(c1, c2);

    cout << "Sum = ";
    sum.display();
    cout << endl;

    cout << "Difference = ";
    diff.display();
    cout << endl;

    return 0;
}


















/* Test Case 1
Input:
Complex Number 1: 3 + 2i
Complex Number 2: 1 + 4i
Output:
Sum: 4 + 6i
Difference: 2 – 2i
Test Case 2
Input:
Complex Number 1: 5 + 7i
Complex Number 2: 2 + 3i
Output:
Sum: 7 + 10i
Difference: 3 + 4i */
