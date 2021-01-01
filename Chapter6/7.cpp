#include <iostream>
#include <string>
#include <cctype>

int main(){
    using namespace std;
    string str;
    int vowel, consonant, other;
    vowel = consonant = other = 0;
    std::cout << "Enter words (q to quit):\n";
    while (cin >> str && str != "q"){
        if (isalpha(str[0])){
            switch (str[0])
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowel++;
                break;
            default:
                consonant++;
                break;
            }
        }else{
            other += 1;
        }
    }
    std::cout << vowel << " words beginning with vowels\n";
    std::cout << consonant << " words beginning with consonants\n";
    std::cout << other << " others\n";
    return 0;
}