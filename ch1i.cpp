#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    int hundred = a/100;
    int ten = (a/10)%10;
    int un = a%10;

    int sum = hundred + ten + un;

    cout<<sum;
}
