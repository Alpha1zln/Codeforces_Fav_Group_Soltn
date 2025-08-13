#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int maxElt , minElt;
    
    if(a>=b && a>=c) {
        if(b>=c) {
            maxElt = a;
            minElt = c;
        }
        else {
            maxElt = a;
            minElt = b;
        }
    }
    else if(b>=a && b>=c) {
        if(a>=c) {
            maxElt = b;
            minElt = c;
        }
        else {
            maxElt = b;
            minElt = a;
        }
    }
    else if(c>=a && c>=b)  {
        if(a>=b) {
            maxElt = c;
            minElt = b;
        }
        else {
            maxElt = c;
            minElt = a;
        }
    }
    
    cout << minElt  << " " << maxElt ;
    
    return 0;
    
}
    