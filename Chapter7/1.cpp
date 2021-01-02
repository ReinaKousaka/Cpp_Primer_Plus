#include <iostream>

double harmonic_mean (double x, double y);

int main(){
    using namespace std;
    double x, y;
    cout << "Enter a pair of numbers (contains one 0 to terminate): ";
    while (cin >> x && cin >> y && x && y){
        cout << "The harmonic mean is: " << harmonic_mean(x, y) << endl;
        cout << "Enter a pair of numbers (contains one 0 to terminate): ";
    }
    return 0;
}

double harmonic_mean(double x, double y){
    return 2.0 * x * y / (x + y);
}