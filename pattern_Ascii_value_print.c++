 
// ইনার লুপ:

//     ইনার লুপ (j) 1 থেকে n পর্যন্ত চলে।
//     count এর মানকে char('A' + count - 1) দ্বারা ক্যারেক্টারে কনভার্ট করে প্রিন্ট করা হয়।
//     এরপর count ইনক্রিমেন্ট করা হয়।

// A B C 
// D E F 
// G H I 

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Number print:";
cin>>n;
int i=1;
int counter=1;
while(i<=n){
int j=1;
while(j<=n){
cout<<char('A'+counter-1);
counter++;
j=j+1;

}
cout<<endl;
i=i+1;

}



    return 0;
}
