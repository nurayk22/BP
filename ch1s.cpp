#include <iostream>
using namespace std;
int main(){
    int h,a,b;
    cin>>h>>a>>b;
    int height = h-a;

    int fulldays = (height + (a-b) - 1)/ (a-b);

    cout<<fulldays+1<<endl;

}