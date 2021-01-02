#include <iostream>
using namespace std;

int Fill_array(double *p, int n);
void Show_array(double *p, int n);
void Reverse_array(double *p, int n);

int main(){
    double a[6];
    int size = Fill_array(a, 6);
    Show_array(a, size);
    Reverse_array(a, size);
    Show_array(a, size);
    return 0;
}

int Fill_array(double *p, int n){
    cout << "Enter numbers: (non-numeric to terminate) ";
    double x;
    int i = 0;
    for (; i < n && cin >> x; i++){
        p[i] = x;
        if (i == n - 1)
            return i + 1;
        cout << "Enter numbers: (non-numeric to terminate) ";
    }
    return i;
}

void Show_array(double *p, int n){
    cout << "The array is: ";
    for (int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double *p, int n){
    double *q = p + n - 1;
    double temp;
    for (int i = 0; i < (n / 2); i++){
        temp = *q;
        *q = *p;
        *p = temp;
        p++;
        q--;
    }
}