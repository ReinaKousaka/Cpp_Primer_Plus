#include <iostream>
using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student *pa, int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main(){
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        cout << "********************\n";
        display2(&ptr_stu[i]);
    }
    cout << "********************\n";
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student *pa, int n){
    int i = 0;
    do{
        cout << "Student # " << (i + 1) << endl;
        cout << "Enter fullname:\n";
        if (i)
            cin.ignore();
        cin.getline(pa->fullname, SLEN);
        if (pa->fullname[0] == '\0'){
            return i;
        }
        cout << "Enter hobby:\n";
        cin.getline(pa->hobby, SLEN);
        cout << "Enter ooplevel: ";
        cin >> pa->ooplevel;
        i++;
        pa++;
    } while (i < n);
    return n;    
}
void display1(student st){
    cout << "fullname: " << st.fullname << endl;
    cout << "hobby: " << st.hobby << endl;
    cout << "ooplevel: " << st.ooplevel << endl;
}
void display2(const student *ps){
    cout << "fullname: " << ps->fullname << endl;
    cout << "hobby: " << ps->hobby << endl;
    cout << "ooplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n){
    for (int i = 0; i < n; i++){
        cout << "Stuedent #" << (i + 1) << ":\n";
        display2(pa + i);
    }
}
