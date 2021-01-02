#include <iostream>
int fac(int x);

int main(){
    using namespace std;
    int x;
    cout << "Enter an integer: (negative to terminate): ";
    while (cin >> x && x >= 0){
        cout << x << "! = " << fac(x) << endl;
        cout << "Enter an integer: (negative to terminate): ";
    }
    return 0;
}

int fac(int x){
    if (!x){
        return 1;
    }else{
        return x * fac(x - 1);
    }
}