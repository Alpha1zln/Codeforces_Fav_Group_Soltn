#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int maxi = INT_MIN;

    // scan  
    for(int i=1; i<=n; i++) {
        int elt;
        cin >> elt; 
        if(elt > maxi) {
            maxi = elt;
        }
        
    }

    cout << maxi << endl;

    return 0;
}