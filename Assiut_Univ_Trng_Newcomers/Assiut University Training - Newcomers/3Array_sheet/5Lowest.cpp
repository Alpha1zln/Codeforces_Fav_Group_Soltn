#include<bits/stdc++.h>
using namespace std;    
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character



// 
// Function prototype 
void  lowestNum(int n, vector<int>& arrVc); // Function to replace elements in the array based on their values
void printElts(vector<int> arrVc); // Function to print the modified elements



int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    lowestNum(n, arrVc); // Call the function to find the lowest number and its position


    return 0;
}


// 
void  lowestNum(int n, vector<int>& arrVc) {

    // // Sort the array in ascending order
    // sort(arrVc.begin(), arrVc.end());

    //  or 

    // int minElement = *min_element(arrVc.begin(), arrVc.end()); // Find the minimum element in the array

    int minElt , pos; 

    for(int i=0; i<n; i++) {
        int elt = arrVc[i]; // Read each element into the vector
        if(i==0) {
            minElt = elt; // Initialize minElt with the first element
            pos = i+1; 
        } 
        else {
            if(elt < minElt) {
                minElt = elt; // Update minElt if a smaller element is found
                pos = i+1; // Update position
            }
        }   
    }   
    
    cout << minElt << " " << pos; 
    // // Sort the array in descending order
    // sort(arrVc.begin(), arrVc.end(), greater<int>());


    //cout << endl; // Print a newline at the end
}