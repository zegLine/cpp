#include <iostream>
#include <string.h>

using namespace std;

int maxchar;
char text[256];

int main(){
    
    //Citirea marimii maxime a unui paragraf si a textului propriu zisgit
    cin >> maxchar;
    cin >> text;

    //Scrierea primului paragraf
    for (int i=0;i<maxchar;i++) {
        cout << text[i];
    }

    //Spatiul determinat de sfarsitul unui paragraf
    cout << endl;

    //Scrierea ultimului paragraf
    for (int i=maxchar;i<strlen(text);i++) {
        cout << text[i];
    }
    return 0;
}