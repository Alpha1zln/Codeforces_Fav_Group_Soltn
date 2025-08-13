#include<bits/stdc++.h>
using namespace std;    
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character




// Function prototype 
void  posArr(int n, vector<int>& arrVc); // Function to replace elements in the array based on their values
void printElts(vector<int> arrVc); // Function to print the modified elements



int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    posArr(n, arrVc); // Call the search function

    //printElts(arrVc); // Call the function to print the modified elements

    return 0;
}



void  posArr(int n, vector<int>& arrVc) {

    for (int i = 0; i < n; i++) {
       
        if (arrVc[i] <= 10) {
            //if(i>0) cout << " ";
            cout << "A[" << i << "] = " << arrVc[i] << endl; // Print the element if it is greater than or equal to 10
        } 
        
    }
    
}


void printElts(vector<int> arrVc)  // Print the modified element
{
    for(int i = 0; i < arrVc.size(); i++) {
        cout << arrVc[i] << " "; // Print each element
    }
    cout << endl; // Print a newline at the end
}