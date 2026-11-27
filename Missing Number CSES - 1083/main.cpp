#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    vector<int> valor(n-1);

    for(int i = 0; i < valor.size(); i++){
        cin >> valor[i];
    }

    sort(valor.begin(), valor.end());

    int verificador = 1;

    for(int i = 0; i < valor.size(); i++, verificador++){
        if(valor[i] != verificador){
            break;
        }
    }

    cout << verificador << '\n';

    return 0;
}