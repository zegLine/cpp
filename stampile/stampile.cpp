#include <iostream>
#include <fstream>

using namespace std;

int numarDeCifre(int numar){
    //variabila unde stocam numarul de cifre
    int c=0;

    while (numar){
        c++;
        numar /= 10;
    }
    //returnam numarul de cifre
    return c;
}

int main(){

    int numarStampile = 0;
    int numarDat = 0;
    int i = 0;

    cin >> numarDat;

    for (i=0; i<=numarDeCifre(numarDat); i++){
        
    }

    cout << numarDeCifre(12832);
}