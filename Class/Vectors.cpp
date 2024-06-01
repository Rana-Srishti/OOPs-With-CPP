#include <iostream>
#include <vector>
using namespace std;


template <class T>
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector <int> vec1;
    // int ele;
    //     for (int i = 0; i < 5; i++) {
    //         cout<<"Enter an int element: ";
    //         cin>>ele;
    //         vec1.push_back(ele);
    //     }

   

    // vector <float> vec2;
    // float elem;
    //     for (int i = 0; i < 5; i++) {
    //         cout<<"Enter a float element: ";
    //         cin>>elem;
    //         vec2.push_back(elem);
    //     }
    // cout<<"Int Elements: ";
    // display(vec1);
    // cout<<"Float Elements: ";
    // display(vec2);
    

  

    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);

    cout<<vec1[2]<<endl;
    vec1.pop_back();

    display(vec1);
    vector <int> :: iterator iter = vec1.end();
    vec1.insert(iter, 36); 
    display(vec1);

    cout<<vec1.at(2)<<endl;


    vector <char> vec3;
    vec3.push_back('a');
    vec3.push_back('b');
    vec3.push_back('c');
    vec3.push_back('d');
    vec3.push_back('e');

    display(vec3);



    return 0;
}