#include <iostream>
#include <string>

struct CandyBar{
    std::string brand_name;
    double weight;
    int calorie;
};

int main(){
    using namespace std;
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    cout << snack.brand_name << endl;
    cout << snack.weight << endl;
    cout << snack.calorie << endl;
    return 0;
}