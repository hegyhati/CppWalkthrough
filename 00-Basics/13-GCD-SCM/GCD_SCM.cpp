#include<iostream>

using namespace std;

int main(){
int a,b,gcd,scm,n;



cin>>a;
cin>> b;
n=a*b;
 
 do{
 	if (a>b)
	 {
	    a=a-b;	
	 }
	 else 
	 {
	 	b=b-a;
	 }
   }while(a!=b);
   
    gcd=a;
 cout<<gcd<<endl;
    scm=n/gcd;
 cout<<scm;
}
