#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{2,5,9},{7,3,6}};
    int b[2][3]={{4,2,6},{7,2,5}};
    int c[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        cout<<endl;

    }
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
            
        
    }
    cout<<endl;

    }
    return 0;
}