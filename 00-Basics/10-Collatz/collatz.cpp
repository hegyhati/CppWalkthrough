#include<iostream>
using namespace std;

int main()
{
   
int  n;

cout << "Enter your numbers to check if it is positive  : " << endl;
do
{
cin >> n;
}
while(n<=0);


do
{
  if(n%2==0)
  {
	   	 n=n/2;
	   	 cout << n<<endl;
  }
  else
  {
		n=n*3+1;
		cout << n<<endl;
  }
}
while ( n!=1 );

return 0;

}


