#include <iostream>
#include <string>

int main(){
    using namespace std;
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[12];
    int s = 0;
    for (int i = 0; i < 12; i++){
        cout << "Enter the sales for " + months[i] + "\n";
        cin >> sales[i];
        s += sales[i];
    }
    cout << "Total sales for the year: " << s << endl;
    return 0;
}