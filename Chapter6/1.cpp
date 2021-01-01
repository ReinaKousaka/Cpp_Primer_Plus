#include <iostream>
#include <cctype>
#include <string>

int main(){
    using namespace std;
    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++){
        if (str[i] == '@')
            break;
        if (islower(str[i]))
            cout << (char)toupper(str[i]);
        else if (isupper(str[i]))
            cout << (char)tolower(str[i]);
        else
            cout << str[i];
    }
    cout << "\n";
    return 0;
}