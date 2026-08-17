#include<bits/stdc++.h>
using namespace std;

void ExplainSets() {

    // 1️⃣ Declaration
    set<int> st;

    // 2️⃣ Insertion
    st.insert(1);
    st.insert(2);
    st.insert(2);     // Duplicate (ignored)
    st.emplace(3);    // Faster than insert
    st.insert(4);

    // 3️⃣ Traversal
    cout << "Elements: ";
    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;

    // 4️⃣ Size
    cout << "Size: " << st.size() << endl;

    // 5️⃣ Check if empty
    cout << "Is empty? " << st.empty() << endl;

    // 6️⃣ Find element
    auto it = st.find(3);
    if(it != st.end())
        cout << "Element 3 found\n";

    // 7️⃣ Count (returns 0 or 1 in set)
    cout << "Count of 2: " << st.count(2) << endl;

    // 8️⃣ Erase by value
    st.erase(2);

    // 9️⃣ Erase by iterator
    st.erase(st.find(3));

    // 🔟 Erase range
    st.insert(5);
    st.insert(6);
    st.erase(st.begin(), st.find(5));

    // 1️⃣1️⃣ Lower Bound
    auto lb = st.lower_bound(4);   // first >= 4
    if(lb != st.end())
        cout << "Lower bound of 4: " << *lb << endl;

    // 1️⃣2️⃣ Upper Bound
    auto ub = st.upper_bound(4);   // first > 4
    if(ub != st.end())
        cout << "Upper bound of 4: " << *ub << endl;

    // 1️⃣3️⃣ Clear entire set
    st.clear();

    cout << "After clear, size: " << st.size() << endl;
}

int main() {
    ExplainSets();
    return 0;
}
