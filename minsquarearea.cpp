#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,xx,yy,m1,m2,m;
        vector<long long int>x;
        vector<long long int>y;
        cin>>n;
        while(n--)
        {
            cin>>xx>>yy;
            x.push_back(xx);
            y.push_back(yy);
        }
        m1=(*max_element(x.begin(),x.end()))-(*min_element(x.begin(),x.end()));
        m2=(*max_element(y.begin(),y.end()))-(*min_element(y.begin(),y.end()));
        m=max(m1,m2);
        m=m*m;
        cout<<m<<endl;
    }
    return 0;
}

