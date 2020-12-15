#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a=0;
    cin>>a;
    int ar[a];
    for (int i=0;i<a;i++)
    {
        cin>>ar[i];
    }

    for(int i=a-1;i>=0;i--)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}

