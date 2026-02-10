#include <iostream>
using namespace std;

// function prototypes
void enterArrayData(double *dynamicArray);
// void outputArrayData(double *dynArray);
// double sumArray(double *dArray);

// array size initialization
const int SIZE = 5;

int main() {

    return 0;
}


// receives dynamic double array and populates with inputted values
void enterArrayData(double *dynamicArray) {
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "\t> Element #" << i << " \n";
        cin >> *(dynamicArray + i);
        cout << endl;
    }
    cout << "\nData entry complete.\n";
}