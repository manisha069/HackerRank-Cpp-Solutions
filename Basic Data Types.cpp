#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a=0;
    long long b=0;
    char c;
    float d=0;
    double e=0;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<d<<endl;
    cout<<fixed<<setprecision(9)<<e<<endl;
    return 0;
}

