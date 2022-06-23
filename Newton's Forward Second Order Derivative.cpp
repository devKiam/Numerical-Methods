#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

// forward second order derivative
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    double f0, f1, f2, h;
    cin>>f0>>f1>>f2>>h;

    double ans = (f2 - 2*f1 + f0)/(h*h);
    cout<<ans<<endl;

}
