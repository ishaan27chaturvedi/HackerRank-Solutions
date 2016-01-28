#include <iostream>

using namespace std;

int main()
{
        int n, j, k;
        cin>>n;
        for(int i=n;i>0;i--)
        {
                for( j=0;j<i-1;j++)cout<<" ";
                for( k=j;k<n;k++)cout<<"#";
                cout<<"\n";
        }
return 0;
}
