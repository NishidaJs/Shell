/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[6];
    int n;
    for(int i = 0; i < 6; i++) {
        cin >> a[i];
    }
    int t = 4;
    while(t >= 1) {
        for(int i = t; i < 6; i++) {
            for(int j = i; j >= t && a[j-t] > a[j]; j-=t) {
                n = a[j];
                a[j] = a[j-t];
                a[j-t] = n;
            }
        }
        t = t / 3;
    }
    for(int i = 0; i < 6; i++) {
        cout << a[i] << '\t';
    }
    return 0;
}
