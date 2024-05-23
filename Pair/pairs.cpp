#include <bits/stdc++.h>
using namespace std;


void print(vector<pair<int,int>>vecP){
    for(auto &it : vecP){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
bool pairComparator(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main() {

//     pair<int,int>p = {1,2};
//     cout<<p.first<<" "<<p.second<<endl;

//     vector<pair<int,int>> vecPair;
//     for(int i = 0 ; i<10;i++){
//         vecPair.push_back(make_pair(i,i+1));
//     }
//     for(auto &it : vecPair){
//         cout<<it.first<<" "<<it.second<<endl;
//     }
   
//    cout<<"-------------"<<endl;
//     for(auto it = vecPair.begin(); it != vecPair.end(); ){
//         if(it->first % 2 == 0){
//             it = vecPair.erase(it); 
//         } else {
//             cout << it->first << " " << it->second << endl;
//             ++it;  
//         }
//     }


    vector<pair<int,int>> vecP={{23,11},{2,100},{343,45},{234,32}};
    // print(vecP);
    sort(vecP.begin(), vecP.end(),pairComparator);
    print(vecP);
    return 0;
}