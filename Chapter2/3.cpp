#include <iostream>
using namespace std;
void f1();  // function prototypes
void f2();

int main(){
    f1();
    f1();
    f2();
    f2();
    return 0;
}

void f1(){  // define functions
    cout << "Three blind mice" << endl;
}

void f2(){
    cout << "See how they run" << endl;
}