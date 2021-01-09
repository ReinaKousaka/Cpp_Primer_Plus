#include <iostream>
#include <cstring>

using namespace std;
struct stringy{
    char * str;
    int ct;
};

void set(stringy &, char *);
void show(const stringy, int = 1);
void show(const char *, int = 1);

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & sy, char * ptr){
    sy.ct = strlen(ptr);
    sy.str = new char [sy.ct + 1];
    strcpy(sy.str, ptr);
}

void show(const stringy sy, int n){
    for (int i = 0; i < n; i++){
        cout << "Member String: " << sy.str << endl;
    }
}

void show(const char *str, int n){
    for (int i = 0; i < n; i++){
        cout << str << endl;
    }
}