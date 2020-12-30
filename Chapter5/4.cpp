#include <iostream>

int main(){
    using namespace std;
    double Dap = 100.0;
    double Cle = 100.0;
    int n = 0;
    while (Cle <= Dap){
        n++;
        Dap += 10;
        Cle *= 1.05;
    }
    cout << "After " << n << " years\n";
    cout << "Cleo's investment: " << Cle << endl;
    cout << "Daphne's investment: " << Dap << endl;
    return 0; 
}