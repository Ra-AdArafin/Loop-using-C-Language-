#include<bits/stdc++.h>
using namespace std;
int main(){
int i=0;
int n;
int a[40];
cout<<"Enter Numbers:";
cin>>n;
cout<<"Input Numbers:";
while(i<n){
cin>>a[i];
i=i+1;

}
  i=n-1;

cout<<"Reverse Numbers:";
while(i>=0){
cout<<a[i]<<" ";
i=i-1;

}
cout<<endl;
cout<<"Reverse Array print:";
  i=n-1;
while(i>=0){

cout<<a[i]<<" ";
i=i-1;



}



    return 0;
}