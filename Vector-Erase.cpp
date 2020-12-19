#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s;
    cin>>s;
    vector<int> a;
    for(int i=0;i<s;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int k;
    cin>>k;
    k=k-1;
    a.erase(a.begin()+k);
    int m,n;
    cin>>m>>n;
    m=m-1;
    n=n-1;
    a.erase(a.begin()+m,a.begin()+n);
    int s2=a.size();
    cout<<s2<<endl;
    for(int i=0;i<s2;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}

