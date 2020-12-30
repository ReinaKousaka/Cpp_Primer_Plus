#include <iostream>

int main(){
    using namespace std;
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << ".";
        }
        for (int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}