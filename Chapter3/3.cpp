#include <iostream>

int main(){
    using namespace std;
    int degree, min, sec;
    cout << "Enter a latitude in degrees, minutes and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degree;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    double x = sec / 3600.0 + min / 60.0 + degree;
    cout << degree << " degrees, " << min << " minutes, " << sec << " seconds = " << x << " degrees.\n";
    return 0;
}