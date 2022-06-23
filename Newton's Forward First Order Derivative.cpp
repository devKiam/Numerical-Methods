#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

// forward first order derivative
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    double f0, f1, f2, h;
    cin>>f0>>f1>>f2>>h;

    double ans = (1/ (2*h)) * ((-3)*f0 + 4 * f1 - f2);
    cout<<ans<<endl;

}
