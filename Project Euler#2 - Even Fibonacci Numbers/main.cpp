#include <bits/stdc++.h>
using namespace std;

int main(){

    int a = 0, b = 1, soma = 0;

        for(int fib = a + b; fib <= 4000000; fib = a + b){

            a = b;
            b = fib;

            if(fib%2 == 0){
                soma += fib;
            }
        }

    cout << soma << endl;

    return 0;
}