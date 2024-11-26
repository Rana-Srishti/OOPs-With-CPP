#include <iostream>
#include <list>
using namespace std;

template <class L>
void disp(list<L>& lst) {
    typename list <L> :: iterator i;
    for (i = lst.begin(); i != lst.end(); i++) {
        cout<<*i<<" ";
    }cout<<endl;
}

int main() {
    list <int> l1;


    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);

    // i++;
    // cout<<*i<<endl;

    disp(l1);

    l1.pop_front();
    l1.push_front(69);
    l1.pop_back();
    l1.remove(3);
    // l1.sort();

    disp(l1);


    list <int> l2;
    l2.push_back(1);
    l2.push_back(8);
    l2.push_back(10);
    disp(l2);

    l2.merge(l1);
    disp(l2);

    l1.reverse();
    disp(l1);
    return 0;
}   