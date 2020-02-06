#include<iostream>
using namespace std;

int main(){
	
    
int n , i ;
int tab[6]={0,0,0,0,0,0};

while(1)
{

     cin >> n;

if(n == 0) break;

else if (n>5)
     {
   	 tab[5]++;
     }
     else if (n==1)
     {
   	 tab[0]++;
     }
	 else if (n==2)
     {
   	 tab[1]++;
     }
	 else if (n==3)
     {
   	 tab[2]++;
     }
	 else if (n==4)
     {
   	 tab[3]++;
     }
	 else if (n==5)
     {
   	 tab[4]++;
     }
     
}
for(int i = 0; i < 5; i++) {
  cout << i+1 << ": " << tab[i] << "\n";
}

          cout << "larger: "<<tab[5] << endl;
return 0;
   
          }


