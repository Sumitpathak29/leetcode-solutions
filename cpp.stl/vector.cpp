#include<bits/stdc++.h>
using namespace std;

void explainvectors(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int,int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int>v(5,100);
    vector<int> v(5);
    vector <int> v1(5,20);
    vector<int> v2(v1);

    //iteration

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<"";

    vector <int> iterator :: it = v.end();
    vector <int> iterator :: it = v.rend();

    cout<<V[0]<<""<<v.at(0);
/*We use this loop to traverse all elements of the vector starting from v.begin() and continue until the iterator reaches v.end() (which is one position after the last element).When iterator becomes equal to v.end(), the loop stops*/
    for(vector<int>:: iterator it = v.begin(); it! = v.end();it++){
        cout<<*(it)<<"";
    }

    //deletion of vectors 

    v.erase(v.begin());
    v.erase(v.begin()+1);

    //insertion
    vector<int>v(2,100);
    v.insert(v.begin(),300)
}