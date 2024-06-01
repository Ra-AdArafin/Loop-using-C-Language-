// type casting pattern print.
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number:";
cin>>n;
int i=1;
while(i<=n){
int j=1;
while(j<=n){
cout<<char('A'+i-1); // type casting 
j=j+1;


}
cout<<endl;
i=i+1;

}

    return  0;
}