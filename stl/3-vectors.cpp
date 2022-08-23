#include <bits/stdc++.h>
using namespace std;

void printVector(vector <int> v){
    for(int i = 0; i < v.size(); i++){
        cout <<  v[i] << " ";
    }
    cout << endl;
}


int main(){

    //vector - dynamically sized array
    // int a[10]; // array a of size 10;
    // vector <int> v; // vector of size of (as of now)
    // int n = 5;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x; //vector will dynamically change it's size as we push new elements
    //     v.push_back(x);
    // }
    // printVector(v); // printing vector using a function
    

    //prefilling values in a vector
    // vector <int> b(5); // {0,0,0,0,0} default prefill_value = 0
    // b.push_back(10); // {0,0,0,0,0,10}
    // b.pop_back(); //removes last element {0,0,0,0,0}
    // vector <int> c(5,3); // {3,3,3,3,3} size = 5, prefill_value = 3
    // for(auto i:c){
    //     cout << i << " ";
    // }


    //copying vectors
    vector <int> a = {1,2,3};
    //copying by value time complexity - O(n) complexity
    //copying by reference time complexity - O(1) complexity
    vector <int> b = a; //passed by value
    vector <int> &c = a; //passed by reference
    //value
    b.pop_back();
    printVector(a); // original vector not affected
    //reference 
    c.pop_back();
    printVector(a); // original vector also affected

    
    return 0;
}