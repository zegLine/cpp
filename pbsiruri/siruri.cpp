#include <iostream>
#include <string.h>

//definim limita de caractere pentru sirurile date in probleme
#define LIMIT_CHAR 256

using namespace std;

/*
Se citeste un cuvant format din litere mici.
Sa se afiseze cuvintele care se obtin prin eliminarea succesiva
a primei si ultimei litere din cuvantul citit.
*/

void problema1(){

    char char1[LIMIT_CHAR];
    cin.get(char1, 255);
    for (int i = 0; i < strlen(char1)/2; i++){
        char1[i] = ' ';
        char1[strlen(char1)-i] = ' ';
        cout << char1 << endl;
    }

}

/*
Se citeste un sir de caractere format din cel mult 100 de caractere.
Sa se numere si sa se stearga vocalele din sir. 
*/

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

/*
Se citeste un cuvant format din litere mici.
Sa se inlocuiasca fiecare vocala mica din cuvant cu vocala mare corespunzatoare.
*/

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

/*
Se citeste un cuvant s format din maxim 200 de litere mici.
Sa se elimine toate perechile de cate 2 litere alaturate identice.
*/

void problema4(){

    char char4[200];
    int i=0;
    cin>>char4;
    while(i<strlen(char4)-1) {
        if(char4[i]==char4[i+1]) {
            strcpy(char4+i,char4+i+2);
            if(i>0) i=i-1;
        }
        else i++;
    }
    cout<<char4;

}

int main(){

}