#include <iostream>

// function prototype
template <typename T>
T max5(T * arr);

int main(){
    using namespace std;
    int a[5] = {3, 4, 1, 9, 6};
    cout << "max5({3, 4, 1, 9, 6}): " << max5(a) << endl;
    double b[5] = {2.3, 5.33, -3.1, 7.2, 4.6};
    cout << "max5({2.3, 5.33, -3.1, 7.2, 4.6}): " << max5(b) << endl;
    return 0;
}

template <typename T>
T max5(T * arr){
    T maxi = arr[0];
    for (int i = 1; i < 5; i++){
        if (arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}