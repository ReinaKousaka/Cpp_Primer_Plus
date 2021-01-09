#include <iostream>
#include <cstring>

struct CandyBar{
    char brand_name[20];
    double weight;
    int calories;
};

void set_value(CandyBar &, const char* = "Millennium Munch", double = 2.85, int = 350);
void display(const CandyBar &);

int main(){
    CandyBar cb1 = {"cb1", 2.5, 4};
    set_value(cb1);
    display(cb1);
    std::cout << "****************\n";
    CandyBar cb2;
    char str[] = "Dove";
    set_value(cb2, str, 9.5, 400);
    display(cb2); 
    return 0;
}

void set_value(CandyBar& cb, const char* name, double weight, int calories){
    strcpy(cb.brand_name, name);
    //cb.brand_name = name;
    cb.weight = weight;
    cb.calories = calories;
}

void display(const CandyBar& cb){
    std::cout << "Brand Name: " << cb.brand_name << std::endl;
    std::cout << "Weight: " << cb.weight << std::endl;
    std::cout << "Calories: " << cb.calories << std::endl;
}