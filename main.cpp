// COMSC-210 | lab 16 | Alexander Sierra
//this first commit is just a copy of lab 14
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
    first.setRed(255);
    first.setGreen(255);
    first.setBlue(255);
    first.print();

    //color 2
    Color second;
    second.setRed(0);
    second.setGreen(0);
    second.setBlue(0);
    second.print();

    //color 3
    Color third;
    third.setRed(0);
    third.setGreen(89);
    third.setBlue(201);
    third.print();
    
    return 0;
}