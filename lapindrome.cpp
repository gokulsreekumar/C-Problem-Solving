#include <iostream>
#include <cmath> 
using namespace std;
#include <bits/stdc++.h> 

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	   string s;
	   cin>>s;
	   //cout<<s.length()<<endl;
	   int flag = 1;
	   for(int i=0; i<(s.length()/2); i++){
	       int count_left = count(s.begin(), s.begin()+s.length()/2, s[i]);
	       int count_right = count(s.begin()+ceil((s.length()/2.0)), s.end(), s[i]);
	       //cout<< "char is: "<< s[i]<<endl<< count_left<<endl;
	       //cout<< count_right <<endl;
	       if(count_left!=count_right){
	           flag=0;
	           break;
	       }
	   }
	   if(flag==1){
	       cout<<"YES\n";
	   } else {
	       cout<<"NO\n";
	   }
	}
	return 0;
}
