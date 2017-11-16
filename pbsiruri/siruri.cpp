#include <iostream>
#include <string.h>

//definim limita de caractere pentru sirurile date in probleme
#define LIMIT_CHAR 256

using namespace std;

int main(){

    char char1[LIMIT_CHAR];
    cin.get(char1, 255);
    for (int i = 0; i < strlen(char1)/2; i++){
        char1[i] = ' ';
        char1[strlen(char1)-i] = ' ';
        cout << char1 << endl;
    }
}