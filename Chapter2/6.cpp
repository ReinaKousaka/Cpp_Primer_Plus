#include <iostream>
double lightyear_to_astunit(double);

int main(){
    using namespace std;
    double lightyear;
    cout << "Enter the number of light years: ";
    cin >> lightyear;
    cout << lightyear << " light years = " << lightyear_to_astunit(lightyear) << " astronomical units." << endl;
    return 0;
}

double lightyear_to_astunit(double lightyear){
    return lightyear * 63240;
}