#include <iostream>
using namespace std;

int fill(double *p);
double mean(double *p, int n);
void display(double *p, int n);

int main(){
    double a[10];
    int size = fill(a);
    display(a, size);
    return 0;
}

int fill(double *p){
    double x;
    int i;
    cout << "Enter a score: (negative to terminate)";
    for (i = 0; i < 10 && cin >> x && x >= 0; i++){
        p[i] = x;
        cout << "Enter a score: (negative to terminate)";
    }
    return i;
}

double mean(double *p, int n){
    double avg = 0;
    for (int i = 0; i < n; i++){
        avg += p[i];
    }
    return avg / n;
}

void display(double *p, int n){
    cout << "The scores are: ";
    for (int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    double avg = mean(p, n);
    cout << "The average score is: " << avg << endl;
}