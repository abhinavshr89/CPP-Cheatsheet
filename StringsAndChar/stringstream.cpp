#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "I$am$going$to$be$successful$no$matter$what";

    vector<string>v;

    stringstream ss(str);
    string temp;
    while(getline(ss,temp,'$')){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}