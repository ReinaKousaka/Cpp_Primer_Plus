#include <iostream>

void f(const char*, int x = 1);   // define the default parameter

int main(){
    char str[] = "arbitrary str";
    f(str);
    std::cout << "****************\n";
    f(str, 4);
    return 0;
}

void f(const char* str, int x){
    for (int i = 0; i < x; i++){
        std::cout << str << std::endl;
    }
}