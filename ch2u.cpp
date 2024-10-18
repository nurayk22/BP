#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b|| b==c){
        cout<<2<<endl;
    }
    else if(a==c || a==b || b==c){
        cout<<3<<endl;
    }
    
    else{
        cout<<0<<endl;
    }
}