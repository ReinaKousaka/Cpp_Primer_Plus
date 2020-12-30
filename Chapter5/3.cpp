#include <iostream>

int main(){
    using namespace std;
    int x, s;
    s = 0;
    cout << "Enter an integer: ";
    cin >> x;
    while (x){
        s += x;
        cout << "Cumulative sum is: " << s << endl;
        cout << "Enter an integer: ";
        cin >> x;
    }
    return 0;
}