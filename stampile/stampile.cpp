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

    int numarStampile = 0; //stocam numarul de stampile temporar al unui numar
    int numarDat = 0; //se schimba de fiecare data cand citim un numar
    int numereInTotal = 0;
    int i = 0;
    int j = 0;
    int z = 0;

    cout << "Cate numere trebuie introduse?"<<endl;
    cin >> numereInTotal;

    for (i=0; i<numereInTotal; i++){
        int cifreNumarTemp[5] = {0}; //stocam cifrele numarului in cifreNumarTemp
        int frecventaCifre[5][2] = {0}; //stocam frecventa cifrelor intr-o matrice cu 2 coloane, prima fiind pentru cifra, si a doua pentru frecventa ei (de cate ori apare)

        cout << "Introduceti al " << i << "-lea numar"<<endl;
        cin >> numarDat; //citim numarul i din sir si il stocam in numarDat

        int numarDatSave = numarDat; // salvam numarul dat pentru mai tarziu

        for (j=0;j<numarDeCifre(numarDat);j++){ //parcurgem numarul si ii stocam cifrele in cifreNumarTemp

            cifreNumarTemp[j] = numarDat % 10;
            numarDat /= 10;

        }

        int q=1;

        for (j=0;j<numarDeCifre(numarDatSave);j++){ //parcurgem sirul cu cifrele numarului
            if (cifreNumarTemp[j] != -1){ //verificam daca cifra a fost deja trecuta in frecventaCifre
                for (z=j+1;z<numarDeCifre(numarDatSave);z++) { //cautam de cate ori apare
                    if (cifreNumarTemp[j] == cifreNumarTemp[z]) {q++; cifreNumarTemp[z]=-1;} //daca apare de mai multe ori celelalte duplicate le vom nota cu -1 pentru a le distinge
                }
                frecventaCifre[j][0] = cifreNumarTemp[j]; //notam cifra
                frecventaCifre[j][1] = q; //notam frecventa
                q=1;
                cifreNumarTemp[j] = -1;
            }
        }   
        for (j=0;j<=numarDeCifre(numarDatSave);j++){
            cout << "Cifra " << frecventaCifre[j][0] << "apare de " << frecventaCifre[j][1] << "ori in numarul " << numarDatSave << endl;
        }
    }   
}