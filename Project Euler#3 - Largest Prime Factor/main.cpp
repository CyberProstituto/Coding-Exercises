#include <bits/stdc++.h>
using namespace std;

int main(){

    int primo = 2;
    long n = 600851475143;   
    int maior;

    while(n > 1){

        maior = primo;

        while(n%primo == 0){
            n = n/primo;
        }

        bool question = true;

        while(question){
            primo++;

            int contador = 0;

            for(int i = 2; i <= sqrt(primo); i++){
                if(primo%i == 0){
                    contador++;
                }
            }

            if(contador == 0){
                question = false;
            }
        }
    }

    cout << maior << endl;
    
    return 0;
}