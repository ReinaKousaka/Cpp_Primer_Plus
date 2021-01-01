#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<double, 10> a;
    double donation;
    double avg = 0;
    cout << "Enter a donation (stop on non-numeric): ";
    int i;
    for (i = 0; i < 10 && cin >> donation; i++){
        a[i] = donation;
        avg += a[i];
    }
    avg /= i;
    cout << "The average is: " << avg << endl;
    int s = 0;
    for (int j = 0; j < i; j++){
        if (a[j] > avg)
            s++;
    }
    cout << s << " numbers are larger than the average\n";
    return 0;
}