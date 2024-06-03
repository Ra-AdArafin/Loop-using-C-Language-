 #include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int i=1;
cout<<"Enter Numbers:";
cin>>n;
while(i<=n){
int j=1;
while(j<=i){

cout<<char('D'+j-i)<<" ";
j=j+1;

}
cout<<endl;
i=i+1;

}



    return 0;
}