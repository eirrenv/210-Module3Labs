#include <iostream>
#include <string>
using namespace std;

// function prototypes
// string* reverseArray(string *strArray);
void displayArray(string *stringArray, string *modifiedArray);

// constant array size int
const int SIZE = 5;

int main() {

    // creating dynamic string array
    string *listOfNames = nullptr;
    listOfNames = new string[SIZE];

    // initializing array
    listOfNames[0] = "Mario";
    listOfNames[1] = "Luigi";
    listOfNames[2] = "Peach";
    listOfNames[3] = "Toad";
    listOfNames[4] = "Yoshi";

    return 0;
}

// receives dynamic string array, reverses elements, returns a pointer to modified array
/* string* reverseArray(string *strArray) {

} */

void displayArray(string *stringArray, string *modifiedArray) {
    cout << "Original array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << *(stringArray + i);
    }
    cout << endl;
    cout << "Reversed array: ";
    for (int j = 0; j < SIZE; ++j) {
        cout << *(modifiedArray + j) << " ";
    }
    cout << endl;
}