#include <iostream>
#define LIMIT 1500;

int main () {

    int n;
    int ore[LIMIT][2];
    int i;
    int j;

    //Se introduce numarul de firme existente in oras
    cout << "Numarul de firme este : " << endl;
    cin >> n;

    //Se introduc orele de intrare / iesire ale firmelor date
    for (i = 0; i <= n; i++) {
            cout << "Introduceti ora de intrare a firmei " << i << " : " << endl;
            cin >> ore[i][1];
            cout << "Introduceti ora de iesire a firmei " << i << " : " << endl;
            cin >> ore[i][2];
    }

    int oreVarf[] = {0};

    for (i = 0; i <= n; i++) {
        oreVarf[i] = (ore[i][1] + ore[i][2]) / 2;
    }

    int oraVarf = 0;

    for (i = 0; i <= n; i++) {
        oraVarf += oreVarf[i];
    }

    oraVarf = oraVarf / n;

    cout << "Ora de varf este " << oraVarf;

    return 0;
}