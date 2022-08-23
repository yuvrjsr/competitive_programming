#include <bits/stdc++.h>
using namespace std;
int main(){


    //pairs - can make a pair of any two data-types/containers
    pair<int,string> p;

    //method 1. for initializing pairs
    // p = make_pair(1, "codeforces");

    // cout << p.first << " " << p.second << endl;
    //method 2. for initializing pairs
    p = {2, "codechef"};
    cout << p.first << " " << p.second << endl;

    //copying pairs
    // pair<int, string> p1 = p; //passed by value
    pair <int, string> &p1 = p; //passed by reference
    p1.first = 3;
    p1.second = "hacker-rank";
    cout << p.first << " " << p.second << endl;

    //use of pairs- to maintain a relation between 2 data-structures
    //rather than initializing two arrays
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    //we can
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);
    for(int i = 0; i < 3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    
    return 0;
}