#include <iostream>
#include <string>

int main(){
    using namespace std;
    string first, last;
    char grade;
    int age;
    cout << "What is your first name? ";
    getline(cin, first);
    cout << "What is your last name? ";
    getline(cin, last);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    grade += 1;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << last << ", " << first << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}