#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;
    int total_minutes = n * 45 + (n / 2) * 15 + ((n - 1) / 2) * 5;

    int hours = 9 + total_minutes / 60;  
    int minutes = total_minutes % 60;   

    cout << hours << " " << minutes << endl;

    
}