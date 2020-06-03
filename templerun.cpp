#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,s=0,sc,f;
    cin>>n;
    long long int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        //ss=ss+arr[i];
    }
    cin>>m;
    while(m--)
    {
        f=0;
        s=0;
        cin>>sc;
        for(i=0;i<n;i++)
        {
            s+=arr[i];
            if(sc<=s)
            {
                cout<<i+1<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"-1"<<endl;
    }
    return 0;
}
