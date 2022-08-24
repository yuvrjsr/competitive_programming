#include <bits/stdc++.h>
using namespace std;
int main(){

    //initializing a vector of pair
    vector <pair <int, int> > v = {{1,2},{2,3},{3,4}};
    for(int i = 0; i < v.size() ; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }


    //initializing a vector of pair by taking input from user
    // int n;
    // cin >> n;
    // vector <pair <int, int>> v;
    // for (int i = 0; i < n; i++) {
    //     int x, y;
    //     cin >> x >> y;
    //     //1st method
    //     // v.push_back(make_pair(x, y));
    //     //2nd method
    //     v.push_back({x, y});
    //     cout << v[i].first << " " << v[i].second << endl;
    // }


    //array of vector - fixed size [fixed rows, dynamic columns]
    // vector <int> v[10]; // array of 10 vectors of size 0
    // int N;
    // cin >> N;
    // vector <int> v[N]; //since its an array we have to declare size
    // for (int i = 0; i < N; i++) {
    //     int n;
    //     cin >> n;
    //     for (int j = 0; j < n; j++) {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < v[i].size(); j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }


    //vector of vector - dynamic size [dynamic rows, dynamic columns]
    int N;
    cin >> N;
    vector <vector <int>> vec;
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        vector <int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        vec.push_back(temp);
    }

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}