#include <iostream>
using namespace std;

int main() {
    int queen_row, queen_col, target_row, target_col;
    cin >> queen_row >> queen_col >> target_row >> target_col;

    if (queen_row == target_row || queen_col == target_col ||(queen_row - target_row) * (queen_col - target_col) == 0) { 
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    
}