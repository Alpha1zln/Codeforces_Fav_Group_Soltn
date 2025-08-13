#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mod = 1e9 ;


    long long first_two = ((1LL*a*b)%mod)%100;

    long long last_two = ((1LL*c*d)%mod)%100;

    long long f_l = ((1LL * first_two * last_two)%mod)%100;

    if(f_l <= 9) {
        cout << "0" << f_l;
    }
    else {
        cout << f_l;
    }
    

    return 0;

}