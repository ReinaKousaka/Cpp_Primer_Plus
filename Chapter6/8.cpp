#include <iostream>
#include <fstream>
#include <string>

int main(){
    using namespace std;
    string filename;
    cout << "Enter the file name: ";
    getline(cin, filename);
    
    ifstream inFile;    // objective for file input
    inFile.open(filename);      // associate inFile with a file
    if (!inFile.is_open()){      // check if failed to open
        cout << "File open error!\n";
        exit(EXIT_FAILURE);
    }
    int n = -1;  // 1 for the ending
    char ch;
    while (inFile.good()){      // while input is good and not at EOF
        inFile >> ch;
        n++;
    }
    cout << "There are " << n << " characters in the file.\n";
    inFile.close();
    return 0;
}