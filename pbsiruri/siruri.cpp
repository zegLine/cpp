#include <iostream>
#include <string.h>

//definim limita de caractere pentru sirurile date in probleme
#define LIMIT_CHAR 256

using namespace std;

void problema1(){

    char char1[LIMIT_CHAR];
    cin.get(char1, 255);
    for (int i = 0; i < strlen(char1)/2; i++){
        char1[i] = ' ';
        char1[strlen(char1)-i] = ' ';
        cout << char1 << endl;
    }

}

void problema2(){

    int i = 0;
    int j = 0;
    char char2[LIMIT_CHAR];
    char vocale = 'aeiouAEIOU';
    cin.get(char2, 255);
    for(i=0;i<strlen(char2);i++)
        if (strchr(vocale,char2[i])!=0)
            {
                j++;
                strcpy(char2+i,char2+i+1);
            }
    cout<<j<<" "<<char2;
    
}

void problema3(){

    char vocale[]="aeiou";
    char char3[40];
    int i;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    if(strchr(vocale,char3[i])!=0) {
        char3[i]=char3[i]+'A'-'a';
    }
    cout<<char3;

}

int main(){

}