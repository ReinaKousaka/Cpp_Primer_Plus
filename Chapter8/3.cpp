#include <iostream>
#include <string>

void f(std::string &);

int main(){
    using namespace std;
    cout << "Enter a string (q to quit): ";
    string str;
    getline(cin, str);
    while (str != "q"){
        f(str);
        cout << str << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye.\n";
    return 0;
}

void f(std::string & str){
    for (int i = 0; i < str.size(); i++){
        str[i] = toupper(str[i]);
    }
}