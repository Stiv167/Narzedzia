#include <iostream>
#include <stdio.h>
using namespace std;
#define N 10

int uzupelnijTabele(int t[], int n) {
    int size = t[0];
    for (size_t i = 0; i < n; i++) {
        if (t[1] > size) {
            size = t[1];
        }
    }
    return size;
}

int main()
{
    int tab[N];
    for (size_t i = 0; i < N; i++) {
        cout << "Podaj liczbe na pozycje: " << i << ": ";
        cin >> tab[i];
    }
    cout << "Najwieksza wartosc z tablicy: " << uzupelnijTabele(tab, N) << endl;
    cout << "Najwieksza wartosc z polowy tablicy: " << uzupelnijTabele(tab, N / 2);
}
