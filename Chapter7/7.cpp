#include <iostream>
const int Max = 5;
using namespace std;

double* fill_array(double *start, int limit);
void show_array(const double *start, const double *end);
void revalue(double r, double *start, double *end);

int main(){
    double properties[Max];
    double* end = fill_array(properties, Max);
    show_array(properties, end);
    if (properties != end){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }
    cout << "Done.\n";
    return 0;
}

double* fill_array(double *start, int limit){
    double temp;
    double *end = start;
    for (int i = 0; i < limit; i++){
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (temp < 0)
            break;
        start[i] = temp;
        end++;
    }
    return end;
}
void show_array(const double *start, const double *end){
    int i = 0;
    for (; start != end; start++){
        cout << "Property #" << ++i << ": $";
        cout << *start << endl;
    }
}
void revalue(double r, double *start, double *end){
    for (; start != end; start++){
        *start *= r;
    }
}
