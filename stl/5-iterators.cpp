#include <bits/stdc++.h>
using namespace std;
int main(){

    //iterators point to memory location of STL containers.
    vector <int> vec = {1,2,3,4,5};
    //declaring an iterator to a vector
    vector <int>::iterator ptr;
    //using ptr iterator to display elements
    for(ptr = vec.begin(); ptr < vec.end(); ptr++){
        cout << *ptr << " ";
    }
    
    /*
    CONTINUOUS AND NON CONTINUOUS
    there is a difference between it++ and it+1
    it++ --> it moves to next iterator 
    it+1 --> it moves to next location
    
    for vectors it++ == it+1 as next iterator is present at next location 
    HENCE VECTORS ARE CONTINUOUS.
    
    for MAPS AND SETS ARE NOT CONTINUOUS hence it+1 is an invalid operation
    so we use it++ for maps and sets.
    */
   

    //using iterator on vector of pair
    vector <pair<int, int> > v_p = {{1,2},{2,3},{3,4}};
    vector <pair<int,int> > ::iterator itr;
    cout << endl << endl;
    //1st syntax
    // for(itr = v_p.begin(); itr < v_p.end(); itr++){
    //     cout << (*itr).first << " " << (*itr).second << endl;
    // }
    //2st syntax
    for(itr = v_p.begin(); itr < v_p.end(); itr++){
        cout << itr->first << " " << itr->second << endl;
    }
    // (*itr).first <=> itr->first



    //iterators for short - ranged based loops
    vector <int> v = {1,2,3,4};
    cout << endl << endl;

    // PASS BY VALUE -------------------------------------
    // for(int value: v){ //pass by value
    //     value++;
    // }
    // for(int value: v){ //pass by value hence no change here
    //     cout << value << " ";
    // }

    // PASS BY REFERENCE ----------------------------------
    for(int &value:v){ //pass by reference
        value++;
    }
    for(int value: v){ //pass by reference 
        cout << value << " "; //values are changed
    }


    //iterators for short - auto keyword -----------------
    vector <pair <int,int >> vecpair = {{1,7},{7,14}};
    cout << endl << endl;
    for(auto i:vecpair){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}