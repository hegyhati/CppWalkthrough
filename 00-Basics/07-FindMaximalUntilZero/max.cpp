#include<iostream>
using namespace std;

int main(){
	
    
int n ,x;
int max ;

     cout << "Enter your numbers   : " << endl;
     cin >> x;
     max=x;
if (max!=0)
{
	
while(1)
{

     cin >> n;
     
if(n == 0) break;

else if (max<n)
     {
   	 max=n;
     }
}
}
     cout << max << endl;
return 0;
   
          }


