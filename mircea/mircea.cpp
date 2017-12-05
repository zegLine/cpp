#include <iostream>
#define LIMIT 100000
using namespace std;

int main() {

    int n;
    int i;
    int j;
    int mat[LIMIT][LIMIT];
    int numarmare = 0;
    int numarmic = 0;

    cin >> n;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            cin >> mat[i][j];
        }
    }

    int c = 0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (mat[i][j] == 0) c++;
        }
    }

    int frec[LIMIT];
    int tempmax = 0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            frec[mat[i][j]] = 1;
            if (mat[i][j] > tempmax) tempmax = mat[i][j];
        }
    }
    
    for (i = tempmax; i>=0; i--){
        if (frec[i]==0) numarmare = i;
    }

    cout << "num mare este " << numarmare;
}