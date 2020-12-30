#include <iostream>
#include <string>

int main(){
    using namespace std;
    string word;
    cout << "Enter words (to stop, type the word done):\n";
    int s = -1;
    do{
        cin >> word;
        s++;
    }while (word != "done");
    cout << "You entered a total of " << s << " words.\n";
    return 0;
}