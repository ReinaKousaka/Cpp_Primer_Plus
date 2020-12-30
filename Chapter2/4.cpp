#include <iostream>
int yr_to_mo(int);

int main(){
    using namespace std;
    int year;
    cout << "Enter your age: ";
    cin >> year;
    cout << "Your age in months is: " << yr_to_mo(year) << endl;
    return 0;
}

int yr_to_mo(int year){
    return year * 12;
}