#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function

    stringstream ss(str);
    vector<int> ans;
    int a;
    char ch;
    while(ss >> a)
    {
        ans.push_back(a);
        ss >> ch;

    }


    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

