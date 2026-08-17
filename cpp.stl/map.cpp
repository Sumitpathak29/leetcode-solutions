#include<bits/stdc++.h>
using namespace std;


void ExplainMap(){
  

    // 1️⃣ Normal map
    map<int,int> mpp1;

    // 2️⃣ Map with pair as value
    map<int,pair<int,int>> mpp2;

    // 3️⃣ Map with pair as key
    map<pair<int,int>,int> mpp3;



    mpp[1]=2;
    mpp.emplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}]=10;
    {
        {1,2}
        {2,4}
        {3,1}
    }
    for(auto it:mpp){
        cout<<it.first<<""<<it.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[5];
}

int main(){





    return 0;
}