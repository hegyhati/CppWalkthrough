#include<iostream>
using namespace std;

int main(){
	
    int  arr [8], i;
    
    cout<< "Please Enter Your Numbers "<<endl;
    
    for( i = 0; i<8; i++)
	{
        cin >> arr[i];
    }
    
    cout <<"Your Numbers Before Zero Are :  "<<endl;
    
    for(i = 0; i<8; i++)
	{
        if (arr[i]== 0) break;
        else cout<<arr[i]<<endl;  
    }
    return 0;
}


