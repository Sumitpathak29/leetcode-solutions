#include<bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    cout << "Deque elements are: ";

    for(auto it : dq){
        cout << it << " ";
    }

    cout << endl;
}


//rest pop_back,pop_front,.back,.front ,insertion,deletion etc function are same as vectors 
int main(){

    explainDeque();


    return 0;
}