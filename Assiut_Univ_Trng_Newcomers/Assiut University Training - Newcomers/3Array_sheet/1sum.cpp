#include<bits/stdc++.h>
using namespace std;    

int main() {
    int n;
    long long int sumN = 0;
    
    cin >> n; // Read the number of elements
    
    for (int i = 1; i<=n; i++) {
        int elt;
        cin >> elt; // Read each element (though not used in the sum)

        sumN += elt; // Calculate the sum of the first n natural numbers 
    }

    cout << abs(sumN) << endl; // Output the total sum
    return 0;
}