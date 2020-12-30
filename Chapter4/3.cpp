#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char first[20];
    char last[20];
    cout << "Enter your first name: ";
    cin.get(first, 20).get();
    cout << "Enter your last name: ";
    cin.get(last, 20).get();
    char full[40];
    strcpy(full, last);
    strcat(full, ", ");
    strcat(full, first);
    cout << "Here's the information in a single string: " << full << endl;
    return 0;
}