#include <iostream>

struct debts{
    char name[50];
    double amount;
};

template <typename T>
int SumArray(T *, int);

template <typename T>
double SumArray(T **, int);

int main(){
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"Ima", 2400.0},
        {"Ura", 1300.0},
        {"Iby", 1800.0}
    };
    debts* pd[3] = {&mr_E[0], &mr_E[1], &mr_E[2]};
    cout << "total number of things: " << SumArray(things, 6) << endl;
    cout << "sum of all the debts: " << SumArray(pd, 3) << endl;
    return 0;
}

template <typename T>
int SumArray(T * arr, int n){
    int res = 0;
    for (int i = 0; i < n; i++){
        res += arr[i];
    }
    return res;
}

template <typename T>
double SumArray(T ** arr, int n){
    double res = 0.0;
    for (int i = 0; i < n; i++){
        res += arr[i] -> amount;
    }
    return res;
}