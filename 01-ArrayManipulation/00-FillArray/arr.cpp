#include <iostream>
int main(){

	using namespace std;

	int n[5];
  	int i=0 ;
  	int j , x ;

  	
	 while (i<5)
    {
    	
	cin>> x;
	if (x>=0)
	{
		n[i]=x;
		i++;
	}
	}
	

    for (j = 0; j < 5; j++ )
  	{
    cout << n[j] << endl;
  	}

	return 0;

}
