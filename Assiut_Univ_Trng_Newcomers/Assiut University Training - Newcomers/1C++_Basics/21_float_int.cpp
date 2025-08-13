#include<bits/stdc++.h>
using namespace std;

int main() {
    
    float n;
    cin >> n;

    int int_n = floor(n);
    double diff = n - int_n ;

    if(diff == 0) {
        cout << "int " << int_n;
    }
    else {
         
        cout << "float " << int_n << " " << diff;
    }
    

    return 0;

}