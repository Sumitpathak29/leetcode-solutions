/*#include<bits/stdc++.h>
using namespace std;

void printname(){
    cout<<"hey striver";
}
int main(){
    printname();
    return 0;
}*/

// the above code is non parameterised function 

#include<bits/stdc++.h>
using namespace std;

void printname(string name){
    cout<<"hey"<<name;
}
int main(){
    string name;
    cin>>name;
    printname(name);
    return 0;
}