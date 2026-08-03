#include<iostream>
using namespace std;

int main(){
    int n = 4;
    // for(int i =1; i<=n ; i++){  //outer loop

    //     for(int j =1;j<=n; j++){  //inner loop
    //      cout<<j <<" ";
    //     }

    //     cout <<endl;


// IN FORM OF STAR


    //    for(int j=1;j<=n;j++){
    //     cout<<"*"<<" ";
    //    }
    //    cout<<endl;
    //  }



// IN FORM OF CHARACTER

         // DOBARA variable reset ya repeat na krne ke liye outer loop se phale likhna hota hai
         
    // for(int i=0; i<n;i++){   //outer
    //     char ch='A';          // DOBARA WAHI PRINT KARWANE KE LIYE INNER LOOP KE PHALE LIKHNA HOTA HAI 
    //     for(int j=0; j<n; j++){   //inner start 
    //       cout<<ch <<" ";
    //       ch=ch+1;      // A=65+1 = 66 so 'B'=66
    //     }
    //     cout<<endl;
    // } 


    // CONTINUOUS PATTERN
    
    //  int num=1;
    //  for(int i=0; i<n; i++){
    //      for(int j=0; j<n; j++){
    //         cout<<num<<" ";
    //         num++;
    //      }  
    //      cout<<endl;
    //  }
    //  cout<<"After Pattern : "<<num<<endl;


// CHARACTER CONTINUOUS PATTERN

    //  char ch = 'A';
    //  for(int i=0; i<n;i++){
    //     for(int j=0; j<n;j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    //  }
    //  cout<<"After Pattern : "<<ch<<endl;


    // TRIANGLE PATTERN 

    for(int i =0; i<n; i++){
        for(int j= 0; j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }


//REPEAT NUMBER PATTERN 


    // for(int i =0; i<n; i++){
    //   for(int j= 0; j<i+1;j++){
    //      cout<<(i+1);
    //   }
    //   cout<<endl;
   //}


// REPEAT CHARACTER PATTERN 

// for(int i =0; i<n;i++){
//     char ch='A'+i;
//     for(int j =0;j<i+1; j++){
//         cout<<ch;
    
//     }
//     cout<<endl;
// }

// NUMBER PATTERN IN TRIANGLE

// for(int i =0; i<n; i++){
//     for(int j= 1; j<=i+1; j++){
//         cout<<j;
        
//     }
//     cout<<endl;
// }
    return 0;
}