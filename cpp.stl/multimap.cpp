#include<bits/stdc++.h>
using namespace std;

void ExplainMultimap(){

    // 1️⃣ Different Types of Multimaps (for learning)

    multimap<int,int> mmp1;
    multimap<int,pair<int,int>> mmp2;
    multimap<pair<int,int>,int> mmp3;

    // 2️⃣ Insertion (multimap allows duplicate keys)

    mmp1.insert({1,2});
    mmp1.insert({1,5});   // duplicate key allowed
    mmp1.insert({2,4});
    mmp1.emplace(3,1);

    /*
        Multimap internally stores like:
        1 -> 2
        1 -> 5
        2 -> 4
        3 -> 1
    */

    // 3️⃣ Traversal

    cout << "Elements of mmp1:\n";
    for(auto it : mmp1){
        cout << it.first << " -> " << it.second << endl;
    }

    // 4️⃣ Find (returns iterator to FIRST occurrence)
    auto it = mmp1.find(1);
    if(it != mmp1.end()){
        cout << "First occurrence of key 1: "
             << it->first << " -> " << it->second << endl;
    }

    // 5️⃣ Count (can be >1 in multimap)
    cout << "Count of key 1: " << mmp1.count(1) << endl;

    // 6️⃣ Erase all occurrences of key
    mmp1.erase(1);

    cout << "After erase(1):\n";
    for(auto it : mmp1){
        cout << it.first << " -> " << it.second << endl;
    }

    // 7️⃣ Equal Range (range of duplicate keys)

    mmp1.insert({2,10});
    mmp1.insert({2,20});

    auto range = mmp1.equal_range(2);

    cout << "All values of key 2:\n";
    for(auto i = range.first; i != range.second; i++){
        cout << i->first << " -> " << i->second << endl;
    }

    // 8️⃣ Size & Clear
    cout << "Size: " << mmp1.size() << endl;
    mmp1.clear();
    cout << "After clear, size: " << mmp1.size() << endl;
}

int main(){
    ExplainMultimap();
    return 0;
}
