#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a;
    int s;
    cin>>s;
    for(int i=0;i<s;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

     for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

