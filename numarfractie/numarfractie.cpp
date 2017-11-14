#include <iostream>
#include <cmath>
#include <math.h>
#include <limits>

using namespace std;

    double numarDat;
    int a = 0;
    int b = 0;

int main(){

    cout << "Dati un numar : " << endl;
    cin >> numarDat;

    int s = sign(numarDat);
    float ax = abs(numarDat);
    float f = s*(ax - floor(ax));

    int i = 0;

    while (true) {

        i++;

        cout << "ss";

        if (i == 5) break;

    }

    cout << "a este " << a << " iar b este " << b << endl;

    return 0;
}