#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
    vector<double> temps {87.20, 77.16, 80.0, 72.5};

    double avg_temp {};
    double sum {};

    for(auto temp: temps)
        sum += temp;

    avg_temp = sum / temps.size();

    //cout<<"Sum is "<<sum<<endl;
    cout<<fixed<<setprecision(1);
    cout<<"Avg temp is "<<avg_temp<<endl;

    // for(auto c: "CPlusPlus")
    // {
    //     cout<<c<<endl;
    // }
    return 0;
}