#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    if(ch >= 48 && ch<= 57)
        cout << "DIGIT";    
    else if ((ch >= 65 && ch<= 90)||(ch >= 97 && ch <= 122))
        cout << "LETTER";
    else
        cout << "OTHER";
}