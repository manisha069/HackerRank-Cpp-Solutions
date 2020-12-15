#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n=0,q=0;
    cin>>n>>q;
    vector<vector<int> > out;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vector<int> in;
        for(int j=0;j<x;j++)
        {
            int y;
            cin>>y;
            in.push_back(y);
        }
        out.push_back(in);
    }

    for(int k=0;k<q;k++)
    {
        int i,j;
        cin>>i>>j;
        cout<<out[i][j]<<endl;
    }

    return 0;
}

