#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int i=1;
cout<<"Enter Number:";
cin>>n;
while(i<=n){

int j=1;
while(j<=i){
// row and colam same.
// output.
// *
// **
// ***
// ****        
// *****  
    cout<<"*";
    j=j+1;
}

cout<<endl;
i=i+1;

}



    return 0;
}