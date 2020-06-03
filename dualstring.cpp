#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n--)
    {
        string s;
        long long int l,hash[26]={0},i,f=0;
        cin>>s;
        l=s.length();
        if(l==1)
        {
            cout<<"No"<<endl;
            continue;
        }
        for(i=0;i<l;i++)
        {
            if(hash[s[i]-'a']==0)
            {
                hash[s[i]-'a']++;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

