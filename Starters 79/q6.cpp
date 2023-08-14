#include <iostream>
#include <cmath>
using namespace std;

// Function to count the number of perfect squares and perfect cubes
void countSquaresAndCubes(int n, int& countSquares, int& countCubes) {
    // Count the number of perfect squares less than or equal to n
    countSquares = floor(sqrt(n));
    
    // Count the number of perfect cubes less than or equal to n
    countCubes = floor(cbrt(n));
}

// Function to calculate the value of F(N)
int calculateF(int n) {
    int countSquares, countCubes;
    countSquaresAndCubes(n, countSquares, countCubes);
    return countSquares - countCubes;
}

// Function to find the minimum value of N such that F(N) >= X
int findN(int x) {
    // Initialize N to X
    int n = x;
    
    // Keep increasing N until F(N) >= X
    while (calculateF(n) < x) {
        n++;
    }
    
    return n;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        cout << findN(x) << endl;
    }
    
    return 0;
}
