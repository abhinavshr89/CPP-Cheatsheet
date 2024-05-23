# Pair in C++ STL

#### creating a pair and accessing the element inside the pair 
```cpp
pair<int,int>p = {1,2};
cout<<p.first<<" "<<p.second<<endl;
```

#### creating a vector of pairs 
```cpp
vector<pair<int,int>> vecPair;
for(int i = 0 ; i<10;i++){
    vecPair.push_back(make_pair(i,i+1));
}
```

#### Iterating over a vector of pairs 
```cpp
for(auto &it : vecPair){
    cout<<it.first<<" "<<it.second<<endl;
}
```
- In this kind of iteration we can only read the value inside the vector of pairs 
- We can not modify the vector of pairs during iteration 

#### Another way to iterate over the vector of pairs

```cpp
 for(auto it = vecPair.begin(); it != vecPair.end(); ){
    if(it->first % 2 == 0){
        it = vecPair.erase(it); 
    } else {
        cout << it->first << " " << it->second << endl;
        ++it;  
    }
}
```
- Here in this method we can modify the vector of pairs while iterating too
- But here we need to use `it->first` and `it->second` or we can use `*(it).first` and `*(it).second`