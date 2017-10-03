#include <iostream>

using namespace std;

void BSort(int* v, int n)
{
    bool swapped = false;
    int lastSwapPos = n;
    do {
        swapped = false;
        n = lastSwapPos;
        for(int i = 0; i < n-1; i++) {
            if(v[i] > v[i+1]) {
                swap(v[i], v[i+1]);
                swapped = true;
                lastSwapPos = i+1;
            }
        }
    }while(swapped);
}

void Log(int* v, int n) {
    for(int i = 0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int v[] = {1, 8, 0, 2, -8, 12, 5, 3, -5};
    const int n = 9;

    BSort(v, n);
    Log(v, n);

    return 0;
}
