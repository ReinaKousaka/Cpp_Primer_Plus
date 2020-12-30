#include <iostream>
#include <string>

struct CandyBar{
    std::string brand_name;
    double weight;
    int calorie;
};

int main(){
    using namespace std;
    CandyBar snacks[3] = {
        {"Mocha1", 2.3, 350},
        {"Mocha2", 3.5, 300},
        {"Mocha3", 5.1, 500},
    };
    for (int i = 0; i < 3; i++){
        cout << snacks[i].brand_name << endl;
        cout << snacks[i].weight << endl;
        cout << snacks[i].calorie << endl;
    }
    return 0;
}