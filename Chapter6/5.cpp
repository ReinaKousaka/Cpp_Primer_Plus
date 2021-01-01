#include <iostream>
#include <algorithm>

int main(){
    using namespace std;
    double x;
    cout << "Enter number of tvarps: (negative or non-numeric to terminate): ";
    while (cin >> x && x >= 0){
        double out = max(min(x - 5000, 10000.0), 0.0) * 0.1 + max(min(x - 15000, 20000.0), 0.0) * 0.15
            + max(x - 35000, 0.0) * 0.2;
        cout << "The tax owed is: " << out << endl;
        cout << "Enter number of tvarps: (negative or non-numeric to terminate): ";  
    }
    return 0;
}