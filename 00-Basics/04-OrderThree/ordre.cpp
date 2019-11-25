#include <iostream>
using namespace std;



int main()
{
 int a, b, c, temp;
    
    cout << "Enter the three numbers : ";
    cin >> a >> b>> c;
 
while(a>c||a>b||b>c)
{
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
}
 cout<<a<<endl;
 cout<<b<<endl;
 cout<<c;
    return 0;
}
