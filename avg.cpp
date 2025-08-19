#include<iostream>
using namespace std;
int main(){
    float eng;
    float sci;
    float mat;
    cout<<"enter the eng mark:";
    cin>>eng;
    cout<<"enter the sci mark:";
    cin>>sci;
    cout<<"enter the mat mark:";
    cin>>mat;
    float avg = ( eng + sci + mat )/3;
    cout<<"the avg is:"<<avg<<endl;

    return 0;
}