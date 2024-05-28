#include <bits/stdc++.h>
using namespace std;
#include <algorithm> // Include the algorithm header

// Function to reverse a vector
void reverseVector(vector<int>& vec) {
    // Use the reverse function to reverse the elements in the vector
    reverse(vec.begin(), vec.end());
}

int main(){
    vector <int> vec = {1,2,3,4,5};
    // Call the reverseVector function to reverse the vector
    reverseVector(vec);
    // Print the reversed vector
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
}