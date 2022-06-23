#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

//simpson's 3/8............

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int lower_limit, upper_limit;
    double no_of_strips;
    cin >> lower_limit >> upper_limit >> no_of_strips;  // take input from console of upper limit and lower limit

    // calculating different values of f(x) for different x according to limits
    vector<double> v, x_values;
    double h = (upper_limit - lower_limit)/no_of_strips;
    cout<<"h = "<<h<<endl;
    double x = lower_limit;
    for(double i=0; i <= no_of_strips; i++)
    {
//        double func = 1/x;
        double func = exp(-x/2.0);
        v.push_back(func);
        x_values.push_back(x);
        x += h;
    }

    // Printing the table
    cout<<"x\t\tf(x)\n";
//    int x_counter = lower_limit;
    for(int i=0; i<v.size(); i++)
    {
        cout<<x_values[i]<<"\t\t"<<v[i]<<"\n";
    }

    // calculating the values for Simpson's 3/8 rule
    double a = 0, b = 0;
    for(int i=3; i < v.size()-1; i++)
    {
        if(i%3)
            a += v[i];
        else
            b += v[i];
    }
    cout<<a<<" "<<b<<endl;
    double ans;
    ans = ( (3.0 * h) / 8.0) * ((v[0] + v[v.size() - 1]) + (3 * (v[1] + v[2] + a)) + (2 * b) ); // simpson's formula
    cout<<"answer is : "<<ans<<endl;

}
