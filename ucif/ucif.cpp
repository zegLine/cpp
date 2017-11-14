#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cout << "n = ";
    cin >> n;
    
    int suma = 0;
    for (int i=1;i<=n;i++){
        suma = suma + pow(i, i);
    }

    cout << suma%10;

    return 0;
}