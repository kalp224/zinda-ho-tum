#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter number of which you want factors";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)

        {
            cout<<i<<endl;
            
        }
        
        
    }
        
    return 0;
}