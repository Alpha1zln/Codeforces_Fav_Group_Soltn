#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b;
    cin >> a >> b;
    
    int add = a+b , sub = a-b;
    //int mult = a*b;
    // long long mult = a*b; // error ... double convert first
    // long long mult = (long long)(a)*b;
    long long mult = (1LL*a)*b;
    

    cout << a << " + " << b << " = " << add << endl;
    cout << a << " * " << b << " = " << mult << endl;
    cout << a << " - " << b << " = " << sub << endl;
    
    return 0;
    
}