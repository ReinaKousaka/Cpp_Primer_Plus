#include <iostream>
#include <cstring>

template <typename T>           // template prototype
T maxn(T *, int);
template <> char * maxn<char *>(char **, int);      // explicit specialization

int main(){
    using namespace std;
    int a[6] = {3, 5, 9, 1, 2, 0};
    cout << "maxn({3, 5, 9, 1, 2, 0}): " << maxn(a, 6) << endl;
    double b[4] = {2.5, -3.9, 6.6, 4.3};
    cout << "maxn({2.5, -3.9, 6.6, 4.3}): " << maxn(b, 4) << endl;
    
    char c1[] = "Algebra"; char c2[] = "Analysis"; char c3[] = "Topology"; char c4[] = "Combinatorics"; char c5[] = "Algorithms"; 
    char* c[5] = {c1, c2, c3, c4, c5};
    cout << "test3: " << maxn(c, 5) << endl;
    return 0;
}

template <typename T> T maxn(T * arr, int n){
    T res = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > res)
            res = arr[i];
    }
    return res;
}

template <> char * maxn<char *>(char ** arr, int n){
    char * res = arr[0];
    int max_length = strlen(res);
    for (int i = 1; i < n; i++){
        if (strlen(arr[i]) > max_length){
            res = arr[i];
            max_length = strlen(res);
        }
    }
    return res;
}