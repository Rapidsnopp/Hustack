#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int odd = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2!=0) odd++;
    }
    cout << odd << " " << n-odd << endl;
}