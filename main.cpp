// COMSC-210 || Lab 14 || Ibrahim Bello
// This program creates a Color class that has as 
// its private member variables three integers representing 
// the red, green, and blue values of that color.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Step 1: Create class
// Attributes: Red (int), Green (int), and Blue (int)
// Methods: Getters and setters for the above, and print function
class Color {
    private:
        int red;
        int green;
        int blue;
    public:
        // getters and setters
        int getRed() const  {return red;}
        void setRed(int r)  {red = r;}
        int getGreen() const  {return green;}
        void setGreen(int g)  {green = g;}
        int getBlue() const  {return blue;}
        void setBlue(int b)  {blue = b;}

        // print method
        void print() {
            cout << setw(15) << "Red: " << red << endl;
            cout << setw(15) << "Green: " << green << endl;
            cout << setw(15) << "Blue: " << blue << endl;
        }
};


// Step 2: main function
// Create multiple Color objects and use print to output neatly
