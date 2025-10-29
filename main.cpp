#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.1416;

double distance(double x1, double y1, double x2, double y2);
double radius(double centerX, double centerY, double pointX, double pointY);
double circumference(double rad);
double area(double rad);

int main() {
    double centerX, centerY;
    double pointX, pointY;
    
    double rad;
    double diam;
    double circum;
    double circArea;

    cout << "--- Kalkulator Lingkaran ---" << endl;
    cout << "Masukkan koordinat titik pusat (x1 y1): ";
    cin >> centerX >> centerY;

    cout << "Masukkan koordinat titik di lingkaran (x2 y2): ";
    cin >> pointX >> pointY;
    
    rad = radius(centerX, centerY, pointX, pointY);
    
    diam = 2.0 * rad;
    
    circum = circumference(rad);
    
    circArea = area(rad);

    cout << fixed << setprecision(4);
    
    cout << "\n--- Hasil Perhitungan ---" << endl;
    cout << "Radius: " << rad << endl;
    cout << "Diameter: " << diam << endl;
    cout << "Keliling (Circumference): " << circum << endl;
    cout << "Luas (Area): " << circArea << endl;

    return 0;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double radius(double centerX, double centerY, double pointX, double pointY) {
    return distance(centerX, centerY, pointX, pointY);
}

double circumference(double rad) {
    return 2.0 * PI * rad;
}

double area(double rad) {
    return PI * pow(rad, 2);
}

