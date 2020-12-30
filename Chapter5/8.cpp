#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char word[20];
    cout << "Enter words (to stop, type the word done):\n";
    int s = -1;
    do{
        cin >> word;
        s++;
    }while (strcmp(word, "done"));
    cout << "You entered a total of " << s << " words.\n";
    return 0;
}