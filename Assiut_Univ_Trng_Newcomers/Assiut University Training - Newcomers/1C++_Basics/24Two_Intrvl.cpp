#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int l1, r1, l2, r2; 
    cin >> l1 >> r1 >> l2 >> r2 ;
    int first, sec;

    if(l2>=l1 && l2<=r1) {
        first = l2;
        if(r2>=r1) {
            sec = r1;
        }
        else {
            sec = r2;
        }
        cout << first << " " << sec;
    }
    else if(l1>=l2 && l1<=r2) {
        first = l1;
        if(r1>=r2) {
            sec = r2;
        }
        else {
            sec = r1;
        }
        cout << first << " " << sec;
    }
    else if(l2>r1 || l1>r2) {
        cout << -1;
    }



    return 0;

}