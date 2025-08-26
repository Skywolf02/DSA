#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the num a:";
    cin>>a;
    cout<<"enter the num b:";
    cin>>b;
    cout<<"enter the num c:";
    cin>>c;
    if(a>=b && a>=c){
        cout<<a<<" is the largest number";
    }else if(b>=c){
        cout<<b<<" is the largest number";
    }else{
        cout<<c<<" is the largest number";
    }
    return 0;
}