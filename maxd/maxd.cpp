#include <iostream>
#define LIMIT 3000
using namespace std;

int limitStart;
int limitFinal;

int calcDivisorsForNum(int num) {
    //calculeaza numarul de divizori al unui numar dat
    int divizori = 2;
    for (int i=2;i<=num/2;i++){
        if (num%i==0) divizori++;
    }
    return divizori;
}

int main () {

    cout << "Limita de inceput a intervalului este : ";
    cin >> limitStart;

    cout << "Limita de final a intervalului este : ";
    cin >> limitFinal;

    int divisorsForNum[LIMIT];

    for (int i = limitStart; i <= limitFinal; i++) {
        //introduce nr de divizori al unui numar in divisorsForNum[]
        divisorsForNum[i] = calcDivisorsForNum(i);
    }

    int frecventaDivizori[LIMIT];

    for (int i = limitStart; i <= limitFinal; i++) {
        frecventaDivizori[divisorsForNum[i]]++;
    }

    int tempMax = frecventaDivizori[limitStart];

    for (int i = 0; i <= limitFinal; i++) {
        if (tempMax < frecventaDivizori[i]) tempMax = frecventaDivizori[i];
    }

    cout << "Cele mai multe numere au " << tempMax << " divizori";

}