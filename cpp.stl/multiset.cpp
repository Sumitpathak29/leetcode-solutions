#include<bits/stdc++.h>
using namespace std;

void explainMultiset() {

    // 1️⃣ Declaration
    multiset<int> ms;

    // 2️⃣ Insertion (Duplicates allowed)
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.emplace(3);
    ms.insert(4);
    ms.insert(2);

    // 3️⃣ Traversal
    cout << "Elements: ";
    for(auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    // 4️⃣ Size
    cout << "Size: " << ms.size() << endl;

    // 5️⃣ Count (can be >1)
    cout << "Count of 2: " << ms.count(2) << endl;

    // 6️⃣ Find (returns iterator to FIRST occurrence)
    auto it = ms.find(2);
    if(it != ms.end())
        cout << "First 2 found\n";

    // 7️⃣ Erase by value (removes ALL occurrences)
    ms.erase(2);

    cout << "After erase(2): ";
    for(auto x : ms) cout << x << " ";
    cout << endl;

    // 8️⃣ Insert again for demonstration
    ms.insert(5);
    ms.insert(5);
    ms.insert(6);

    // 9️⃣ Erase ONLY ONE occurrence using iterator
    auto it2 = ms.find(5);
    if(it2 != ms.end())
        ms.erase(it2);

    cout << "After erasing one 5: ";
    for(auto x : ms) cout << x << " ";
    cout << endl;

    // 🔟 Lower Bound (first >= value)
    auto lb = ms.lower_bound(5);
    if(lb != ms.end())
        cout << "Lower bound of 5: " << *lb << endl;

    // 1️⃣1️⃣ Upper Bound (first > value)
    auto ub = ms.upper_bound(5);
    if(ub != ms.end())
        cout << "Upper bound of 5: " << *ub << endl;

    // 1️⃣2️⃣ Equal Range (range of all duplicates)
    auto range = ms.equal_range(5);
    cout << "All 5s: ";
    for(auto i = range.first; i != range.second; i++)
        cout << *i << " ";
    cout << endl;

    // 1️⃣3️⃣ Check empty
    cout << "Is empty? " << ms.empty() << endl;

    // 1️⃣4️⃣ Clear
    ms.clear();
    cout << "After clear, size: " << ms.size() << endl;
}

int main() {
    explainMultiset();
    return 0;
}
