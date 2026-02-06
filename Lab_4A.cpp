#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
using namespace std;

// Color struct, containing RGB hue values in integer form
struct Color {
    int red;
    int green;
    int blue;
};

// function to create new Color
Color createColor() {
    Color newColor;
    cout << "Please input Red color value: ";
    cin >> newColor.red;
    cout << "Please input Green color value: ";
    cin >> newColor.green;
    cout << "Please input Blue color value: ";
    cin >> newColor.blue;
    return newColor;
}

// formatted Color print function
void printColor(Color color) {
    cout <<  "\t" << setw(4) << color.red;
    cout << "\t" << setw(4) << color.green;
    cout << "\t" << setw(4) << color.blue << endl;
}

// basic main function to create vector and first test color, append to vector and print from vector
int main() {
    vector<Color> colorVector;
    Color firstColor;

    int n; // initialize new random int n
    srand(time(0));
    n = rand() % 26 + 25;

    // create and push color structs into vector
    for (int i = 0; i < n; ++i) {
        Color tmpColor;
        // create random values from 0 to 256 for temp struct
        tmpColor.red = rand() % 255 + 0;
        tmpColor.green = rand() % 255 + 0;
        tmpColor.blue = rand() % 255 + 0;
        colorVector.push_back(tmpColor);
    }

    // table start
    cout << "Color#\tR value\tG value\tB value" << endl;
    cout << "------\t------\t------\t------" << endl;


    // print vector color values
    for (int j = 0; j < n; ++j) {
        cout << setw(4) << j + 1;
        printColor(colorVector[j]);
    }


    // adding to update comments in commit
    return 0;
}
