#include <iostream>
#include <string>

struct CandyBar{
    std::string brand_name;
    double weight;
    int calorie;
};

int main(){
    using namespace std;
    CandyBar *p = new CandyBar[3];
    *p = {"Mocha1", 2.3, 350};
    *(p + 1) = {"Mocha2", 3.5, 300};
    *(p + 2) = {"Mocha3", 5.1, 500};

    for (int i = 0; i < 3; i++){
        cout << p[i].brand_name << endl;
        cout << p[i].weight << endl;
        cout << p[i].calorie << endl;
    }
    delete [] p;
    return 0;
}