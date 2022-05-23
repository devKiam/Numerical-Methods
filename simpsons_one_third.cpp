#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int upper_limit, lower_limit;
    cin>>upper_limit>>lower_limit;

    vector<double> v;

    for(int i=upper_limit; i<=lower_limit; i++)
    {
        double func = 1.0/i;
        v.push_back(func);
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    double a = 0;
    for(int i=1; i<lower_limit-1; i+=2)
    {
        a += v[i];
    }
    double b = 0;
    for(int i=2; i<lower_limit-1; i+=2)
    {
        b += v[i];
    }

    double ans;
    int h = 1;
    ans = (h/3.0) * ( (v[0] + v[lower_limit-1]) + (4*a) + (2*b) );
    cout<<"answer is : "<<ans<<endl;

}
