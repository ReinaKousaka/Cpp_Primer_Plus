#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<double, 3> dash;
    for (int i = 0; i < 3; i++){
        cout << "Enter the dash: ";
        cin >> dash[i];
    }
    cout << "Average: " << (dash[0] + dash[1] + dash[2]) / 3.0 << endl;
    return 0;
}