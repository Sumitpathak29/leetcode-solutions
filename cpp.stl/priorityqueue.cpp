#include <bits/stdc++.h>
using namespace std;

void ExplainPriorityQueue(){

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.emplace(5);

    // In priority_queue, top() gives largest element (max heap)
    cout << "Top element: " << pq.top() << endl;

    pq.pop();

    cout << "Top after pop: " << pq.top() << endl;

    cout << "Size: " << pq.size() << endl;

    cout << "Is empty: " << pq.empty() << endl;

    // To print all elements
    priority_queue<int> temp = pq;

    cout << "Elements (highest to lowest): ";
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}

int main(){

    ExplainPriorityQueue();

    return 0;
}
