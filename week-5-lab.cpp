#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main() {

float a, b;
float c = 0.0;
auto hyp = c;

cout << "Enter the width and height of the right triangle: ";

cin >> a >> b;

cout << "The width you have entered is: " << a << " and the height is: " << b << "\n";

hyp = sqrt ( pow(a,2) + pow(b,2));

cout << "The hypotenuse is: " << hyp;

ofstream week5lab;

week5lab.open ("Sides of triangle.txt");

week5lab << "Your triangle has 3 sides that are " << a << "cm, " << b << "cm, and " << hyp << "cm.";

week5lab.close();

return 0;
}