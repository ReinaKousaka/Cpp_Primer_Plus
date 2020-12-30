#include <iostream>
#include <string>

struct pizza{
    std::string name;
    double diameter;
    double weight;
};

int main(){
    using namespace std;
    pizza p;
    cout << "Enter the name of the pizza company: ";
    getline(cin, p.name);
    cout << "Enter the diameter of the pizza: ";
    cin >> p.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> p.weight;
    cout << "Company Name: " << p.name << endl;
    cout << "Diameter: " << p.diameter << endl;
    cout << "Weight: " << p.weight << endl;
    return 0;
}