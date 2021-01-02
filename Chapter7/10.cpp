#include <iostream>
using namespace std;

typedef double (*pf)(double, double);
double calculate(double x, double y, pf);
double add(double x, double y);
double multiply(double x, double y);
int main(){
    pf function_array[2] = {add, multiply};
    double x, y;
    cout << "Enter two numbers: (non-numeric to terminate) ";
    while (cin >> x >> y){
        for (int i = 0; i < 2; i++){
            cout << "result calculated by method " << (i + 1) << ": " 
                << calculate(x, y, function_array[i]) << endl;
        }   
        cout << "Enter two numbers: (non-numeric to terminate) ";
    }
    return 0;
}

double calculate(double x, double y, pf func){
    return (*func)(x, y);
}

double add(double x, double y){
    return x + y;
}

double multiply(double x, double y){
    return x * y;
}