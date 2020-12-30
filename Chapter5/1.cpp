#include <iostream>

int main(){
    using namespace std;
    int a, b, s;
    cout << "Enter the smaller integer: ";
    cin >> a;
    cout << "Enter the bigger integer: ";
    cin >> b;
    s = 0;
    for (int i = a; i <= b; i++){
        s += i;
    }
    cout << "The sum through is: " << s << endl;
    return 0;
}