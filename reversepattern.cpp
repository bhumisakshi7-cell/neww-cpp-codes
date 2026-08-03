#include<iostream>
using namespace std;

int main(){
    int n = 5;

    // for(int i =n; i>0; i--){
    //     cout<<i<<endl; 
    // } 

    // for(int i = 0; i<n; i++){
    //     for(int j = i+1; j>0; j--){
    //         cout<< j <<" ";
    //     }
    //     cout <<endl;
    // }


// CHARACTER REVERSE TRIANGLE PATTERN    

 char ch='A';
 for(int i=0;i<n;i++){
     for(int j=i+1; j>0; j--){
        cout<< ch <<" ";
        ch++;
     }
     cout<<endl;
 }
    return 0;
}