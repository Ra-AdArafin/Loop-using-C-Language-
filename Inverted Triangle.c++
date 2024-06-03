#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number:";
cin>>n;
int i=1;
while(i<=n){

// space count
int space =n-i;
while(space>0){
// jodi space 0 theke boro hoi tahole kaj korbe
// space  0  hoea gele loop kaj korbe na 
// prothome space 3,2,1 aibahbe kaj korbe aksomoi 
//space 0 hoea jabe tokhoni loop theme jabe.

cout<<" ";
// space 3,2,1,0 airokom kore kore kaj korbe.
//space na komale loop infiniti bar cholbe .
space=space-1;

}
// space count kora sesh aibar * print korar pala
int j=1;
while(j<=i){
cout<<"*"<<" ";
j=j+1;

}
cout<<endl;
i=i+1;



}



    return 0;
}