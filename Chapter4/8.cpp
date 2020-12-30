#include <iostream>
#include <string>

struct pizza{
    std::string name;
    double diameter;
    double weight;
};

int main(){
    using namespace std;
    pizza *p = new pizza;

    cout << "Enter the diameter of the pizza: ";
    cin >> p->diameter;
    cout << "Enter the name of the pizza company: ";
    cin.get();  // deal with the \n
    getline(cin, p->name);
    cout << "Enter the weight of the pizza: ";
    cin >> p->weight;
    
    cout << "Company Name: " << p->name << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight: " << p->weight << endl;
    delete p;
    return 0;
}