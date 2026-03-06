// COMSC-210 | lab 16 | Alexander Sierra
#include <iostream>
#include <iomanip>
using namespace std;

const int W = 13; //for formatting

class Color {
private:
    int red;
    int green;
    int blue;
public:
//constructors
    Color() {red=0; green=0; blue=0;}
    Color(int r, int g, int b) {red=r; green=g; blue=b;}
    Color(int r) {red=r; green=0; blue=0;}
//getters and setters
    int getRed() {return red;}
    void setRed(int r) {red = r;}
    int getGreen() {return green;}
    void setGreen(int g) {green = g;}
    int getBlue() {return blue;}
    void setBlue(int b) {blue = b;}
//member print method
    void print() {
        cout << setw(W) << "Red Value: " << red << endl;
        cout << setw(W) << "Green value: " << green << endl;
        cout << setw(W) << "Blue value: " << blue << endl << endl;
    }
};

int main() {
    //color 1
    Color first;
    first.print();

    //color 2
    Color second(133);
    second.print();

    //color 3
    Color third(145, 250, 20);
    third.print();
    
    return 0;
}