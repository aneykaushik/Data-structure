#include<iostream>
using namespace std ;

int main(){
    int marks[5]; // array declare 
    cout<<"Enter five marks:";
    //store input from user 
    for (int i= 0;i<5;i++){
        cin>>marks[i];
    }

    cout<<"the marks are:";

    //print the ar<ray 
    for (int n=0;n<5;++n){
        cout<<marks[n]<<" " ;
    }

    
    return 0;
}