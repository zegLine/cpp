#include <fstream>
#include <iostream>
#define LIMIT 3000

using namespace std;

//Funcia clearDuplicates va inlocui fiecare element egal cu elem din arr cu toBeReplacedWith
int clearDuplicates (int arr[][], int elem, int rows, int columns, int toBeReplacedWith) {
    int dupes = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] == elem) {arr[i][j] = toBeReplacedWith; dupes++;}
        }
    }
    return dupes;
}

int main(){

    ifstream fin("flori.in");
    ofstream fout("flori.out");

    int n, k;
    int floriFete[LIMIT][LIMIT];
    int i, j;
    int frecventa[LIMIT][2] = {0};
    int flori[LIMIT] = {0};

    //Citim din fisierul flori.in valorile cerute
    fin >> n >> k;
    for (i = 0; i < n; i++){
        for (j = 0; j < k; j++){
            fin >> floriFete[i][j];
        }
    }

    int c = 0;
    //Parcurgem datele si pastram elementele coresp numarului de flori in variabila frecventa[][]
    for (i = 0; i < n; i++){
        for (j = 0; j < k; j++){
            if (floriFete[i][j] == -1) j++; else {
                frecventa[c][1] = floriFete[i][j];
                frecventa[c][2] = clearDuplicates(floriFete, floriFete[i][j], n, k, -1);
                c++;
            }
        }
    }

    int max = frecventa[0][2];
    int numar = 0;
    for (i = 1; i <= k; i++) {
        if (max < frecventa[i][2]) {max = frecventa[i][2]; numar = frecventa[i][1];}
    }

    cout << "Floarea " << numar << " apare de " << max << " ori" << endl;

    return 0;
}