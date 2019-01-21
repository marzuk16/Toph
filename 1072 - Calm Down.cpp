#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    double R,r;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        cin>>R>>n;

        r=(R*sin(180/n))/(1+sin(180/n));

        cout<<fixed<<setprecision(7)<<"Case "<<i<<": "<<r<<endl;
    }

    return 0;
}

