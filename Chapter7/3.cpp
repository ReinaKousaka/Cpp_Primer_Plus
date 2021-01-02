#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box *p);
void set_volume(box *p);

int main(){
    box b;
    cout << "Enter the maker of the box: ";
    cin.get(b.maker, 40);
    cout << "Enter the height of the box: ";
    cin >> b.height;
    cout << "Enter the width of the box: ";
    cin >> b.width;
    cout << "Enter the length of the box: ";
    cin >> b.length;
    set_volume(&b);
    display(&b);
    return 0;
}  

void display(box *p){
    cout << "maker: " << p->maker << endl;
    cout << "height: " << p->height << endl;
    cout << "width: " << p->width << endl;
    cout << "length: " << p->length << endl;
    cout << "volume: " << p->volume << endl;
}

void set_volume(box *p){
    p->volume = p->height * p->width * p->length;
}