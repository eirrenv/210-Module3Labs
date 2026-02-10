#include <iostream>
// added for outputArrayData() and sumArray()
#include <iomanip>
using namespace std;

// function prototypes
void enterArrayData(double *dynamicArray);
void outputArrayData(double *dynArray);
void sumArray(double *dArray);

// array size initialization
const int SIZE = 5;

int main() {

    // creating dynamic double array
    double *doubleArr = nullptr;
    doubleArr = new double[SIZE];

    // inputting data into new dynamic array
    enterArrayData(doubleArr);

    // output added data
    outputArrayData(doubleArr);

    // output sum of array
    sumArray(doubleArr);

    // delete dynamic array for cleanliness :)
    delete [] doubleArr; 

    return 0;
}


// receives dynamic double array and populates with inputted values
void enterArrayData(double *dynamicArray) {
    cout << "Data entry for the array:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "\t> Element #" << i << " ";
        cin >> *(dynamicArray + i);
    }
    cout << "Data entry complete.\n";
}

// outputs array data with one sig fig
void outputArrayData(double *dynArray) {
    cout << "Outputting array elemets: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << fixed << setprecision(1) << *(dynArray + i) << " ";
    }
    cout << endl;
}

void sumArray(double *dArray) {
    double sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum += *(dArray + i);
    }
    cout << "Sum of values: " << sum << endl;
}