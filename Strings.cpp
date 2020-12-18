#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin>>a>>b;
    int s1=a.size();
    int s2=b.size();
    cout<<s1<<" "<<s2<<endl;
    cout<<a+b<<endl;
    cout<<b[0];
    for(int i=1;i<s1;i++)
    {
        cout<<a[i];
    }
    cout<<" ";
    cout<<a[0];
    for(int j=1;j<s2;j++)
    {
        cout<<b[j];
    }


}

