#include <iostream>
using namespace std;
int main(){
    int main() {
    int a, b;
    cin >> a >> b;
    int start = ceil(sqrt(a));
    int end = floor(sqrt(b));
    for (int i = start; i <= end; i++) {
        cout << i * i << " ";
    }
}
}