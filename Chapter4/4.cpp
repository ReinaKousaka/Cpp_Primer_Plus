#include <iostream>
#include <string>

int main(){
    using namespace std;
    string first;
    string last;
    cout << "Enter your first name: ";
    getline(cin, first);
    cout << "Enter your last name: ";
    getline(cin, last);
    string full;
    full = last + ", " + first;
    cout << "Here's the information in a single string: " << full << endl;
    return 0;
}