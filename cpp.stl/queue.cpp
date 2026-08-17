#include <bits/stdc++.h>
using namespace std;


void Explainqueue(){

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    q.back()+=5;


    q.pop();

    

    cout<<q.size();

    cout<<q.empty();
queue<int> temp = q;   // copy original queue

while(!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
}


}

int main(){

    Explainqueue();


    return 0;
}