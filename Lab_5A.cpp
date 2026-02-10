#include <iostream>
using namespace std;

// changed function to void and inputs into pointers
void swap(int*, int*);

int main() {
    int x = 5, y = 10;

    // created new pointers for x and y
    int *xptr = nullptr;
    int *yptr = nullptr;

    // set pointer addresses to x and y locations
    xptr = &x;
    yptr = &y;

    // changed variable calls to pointer calls
    cout << "x = " << *xptr << "  | y = " << *yptr << endl;

    cout << "Swapping...\n";

    // swapping values using pointers
    swap(xptr, yptr);

    // declaring sum variable and adding newly swapped values outside of previous function
    int sum = 0;
    sum = x + y;

    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}


// changed variables to pointers
void swap(int *xpointer, int *ypointer) {
    int temp = *xpointer;
    *xpointer = *ypointer;
    *ypointer = temp;
}