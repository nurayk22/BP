#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int powerOfTwo = 1; 

    while (powerOfTwo <= n) {
        cout << powerOfTwo << " "; 
        powerOfTwo *= 2;           
    }

   
}