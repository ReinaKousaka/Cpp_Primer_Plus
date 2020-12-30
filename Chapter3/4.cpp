#include <iostream>

int main(){
    using namespace std;
    long day, hr, min, sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    cout << sec << " seconds = ";
    day = sec / 86400;
    sec = sec % 86400;
    hr = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;
    cout << day << " days, " << hr << " hours, " << min << " minutes, " << sec << " seconds.\n";
    return 0;
}