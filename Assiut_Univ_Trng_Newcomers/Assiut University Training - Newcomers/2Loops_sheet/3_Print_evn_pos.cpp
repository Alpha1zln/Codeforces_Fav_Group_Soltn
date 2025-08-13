#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    // if(n==1) cout << -1;
    int evenCount=0, oddCount=0, posCount=0, negCount=0;
    // scan
    for(int i=1; i<=n; i++) {
        float elt;
        cin >> elt;
    // }
        int int_elt = int(elt);

    // for(int i=1; i<=n; i++) {
        if(int_elt%2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }

        // pos chk
        if(int_elt > 0 ) {
            posCount++;
        }
        else if(int_elt < 0){
            negCount++;
        }
        
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << posCount << endl;
    cout << "Negative: " << negCount << endl;
    



    return 0;
}