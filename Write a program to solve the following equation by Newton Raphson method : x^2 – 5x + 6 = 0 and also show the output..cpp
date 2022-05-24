#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    double x = 1.0;
// convergence
    cout<<"Applying Convergence,"<<endl;
    while(true)
    {
        double convergence = (abs((pow(x, 2) - (5*x) + 6)) * 2) /

                             pow(((2*x) - 5), 2);
        cout<<"Let, initial value of X = "<<x<<"\n"<<"so, convergence = "<<setprecision(2)<<convergence<<endl;
        if( convergence < 1 )
        {
            cout<<"Which is less than 1, so X0 = "<<x<<"\n\n\n";
            break;
        }
        cout<<"Again,"<<endl;
        x++;
    }
//Iterations
    double desired_accuracy = 0.01;
    int i = 0;
    while(true)
    {
        double Xn_plus_one = (pow(x,2)-6) / ((2*x)-5);
        double difference = abs(Xn_plus_one - x);
        cout<<"X"<<i<<" = "<<setprecision(3)<<x<<", putting this value in NRM eqn,\n"<<"\tX"<<i+1<<" = "<<setprecision(3)<<Xn_plus_one<<endl;

        cout<<"\tNow, |Xn+1 - Xn| = "<<setprecision(2)<<difference<<endl;
        if( difference <= desired_accuracy)
        {

            cout<<"equal to the desired accuracy, so ANS : "<<setprecision(3)<<Xn_plus_one<<endl;

            break;
        }

        cout<<"which is greater than the desired accuracy, therefore we can proceed\n\n";
        i++;
        x = Xn_plus_one;
    }
}
