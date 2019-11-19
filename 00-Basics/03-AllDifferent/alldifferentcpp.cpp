#include <iostream>
using namespace std;


int main()
{
    int x, y, z;
    
    cout << "Enter the three numbers : ";
    cin >> x >> y>>z;
    if(x==y ||x==z ||y==z ){
    	cout << "not all different ";
	}
	else{
		cout << "all different";
	}
	return 0;
}

