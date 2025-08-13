#include<bits/stdc++.h>
using namespace std;

int main() {

    // int n;
    // cin >> n;
    int choice = 1;

    while(choice) {
        int elt;
        cin >> elt;

        if(elt == 1999) {
            cout<<"Correct";  choice = 0;
            break;
        }
        else {
            cout<<"Wrong" << endl;
        }
    }

    return 0;

}