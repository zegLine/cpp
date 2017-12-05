#include <iostream>

#define LIMIT 1000001

using namespace std;

void prob1(){

    int LUNA1;
    int LUNA2;
    int AN1;
    int AN2;
    cin >> AN1 >> AN2 >> LUNA1 >> LUNA2;
    if (AN1 == AN2) {
        if (LUNA1 == LUNA2) cout << "LA FEL"; else {
            cout << "DIFERIT";
        }
    } else {
        cout << "VECHI";
    }

}

void prob2(){

    long n;
    long i;
    long numere[LIMIT];
    long frecventaCifre[10];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> numere[i];
    }

    for (i = 0; i < n; i++) {
        while (numere[i]) {
            frecventaCifre[numere[i]%10]++;
            numere[i] /= 10;
        }
    }

    unsigned c = 0;

    for (i = 0; i < 10; i++) {
        if (frecventaCifre[i] == 1) {
            cout << i << endl;
            c++;
        }
    }

    if (!c) cout << "NU EXISTA";

}

int main () {
    prob2();
}