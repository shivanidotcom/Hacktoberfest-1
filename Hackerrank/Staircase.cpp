#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int space = n-i;
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        int star = i;
        for(int j = 1; j <= star; j++){
            cout << "#";
        }
        cout << endl;
    }
}
