#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a,b;
        int ans=0;
        int maxi=INT_MIN;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;

            if(a<=10 && b>maxi)
            {
                ans=i;
                maxi=b;
            }
        }
        cout<<"RESPONSE NUMBER : "<<ans<<endl;
    }
    return 0;
}
