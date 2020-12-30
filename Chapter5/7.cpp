#include <iostream>
#include <string>

struct car{
    std::string make;
    int year;
};

int main(){
    using namespace std;
    cout << "How many cars do you wish to catalog? ";
    int n;
    cin >> n;
    car *p = new car[n];
    for (int i = 0; i < n; i++){
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        cin.get();
        getline(cin, (p+i)->make);
        cout << "Please enter the year made: ";
        cin >> (p+i)->year;
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < n; i++){
        cout << (p+i)->year << " " + (p+i)->make + "\n";
    }
    delete [] p;
    return 0;
}