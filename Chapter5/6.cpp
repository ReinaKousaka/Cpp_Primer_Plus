#include <iostream>
#include <string>

int main(){
    using namespace std;
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[3][12];
    int s[3] = {0, 0, 0};
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 12; i++){
            cout << "Enter the sales for " + months[i] + "\n";
            cin >> sales[j][i];
            s[j] += sales[j][i];
        }
    }
    cout << "Total sales for 1st year: " << s[0] << endl;
    cout << "Total sales for 2nd year: " << s[1] << endl;
    cout << "Total sales for 3rd year: " << s[2] << endl;
    cout << "Total sales: " << s[0] + s[1] + s[2] << endl;
    return 0;
}