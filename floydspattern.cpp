#include<iostream>
using namespace std;

int main(){
    int n = 4;

    // int num = 1;
    // for(int i=0; i<n; i++){
    //    for(int j=i+1;j>0;j--){   // backward run ho raha => i+1
    //     cout<< num<<" ";
    //     num++;
    //    }
    //    cout<<endl;
    // }

// CHARACTER FLOYDS TRIANGLE PATTERN

    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;

    }
    return 0;
}