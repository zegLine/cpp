#include <iostream>
#include <fstream>
#define LIMIT 1500

using namespace std;

int main () {

    ifstream fin("livada.txt");
    ofstream fout("livadaout.txt");

    int n,m;
    int livada[LIMIT][LIMIT];
    int i;
    int j;

    fin >> n;
    fin >> m;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            fin >> livada[i][j];
        }
    }

    int temp = 0;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            temp = livada[i][j];
            if (temp == livada[i][j+1]) cout << temp << endl;
        }
    }


    return 0;
}