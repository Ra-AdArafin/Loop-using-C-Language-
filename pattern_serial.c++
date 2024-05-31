#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number:";
cin>>n;
int i=1;
int count=0;
while(i<=n){
int j=1;
while(j<=n){
cout<<count++<<" ";
j=j+1;

}
cout<<endl;
i=i+1;



}




    return 0;
}