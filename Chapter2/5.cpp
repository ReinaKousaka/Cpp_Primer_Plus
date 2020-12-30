#include <iostream>
float cel_to_fah(float);

int main(){
    using namespace std;
    float celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << cel_to_fah(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

float cel_to_fah(float celsius){
    return celsius * 1.8 + 32.0;
}