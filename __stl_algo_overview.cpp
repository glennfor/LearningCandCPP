#include <iostream>
#include <list>
#include <algorithm>
int main()
{
    using namespace std;

    list<int> li;
    for (int nCount=0; nCount < 6; nCount++)
        li.push_back(nCount);

    list<int>::const_iterator it; // declare an iterator
    it = min_element(li.begin(), li.end());
        cout << *it << " ";
    it = max_element(li.begin(), li.end());
        cout << *it << " ";

    cout << endl;
}

#include <iostream>
#include <list>
#include <algorithm>
int main()
{
    using namespace std;

    list<int> li;
    for (int nCount=0; nCount < 6; nCount++)
        li.push_back(nCount);

    list<int>::const_iterator it; // declare an iterator
    it = find(li.begin(), li.end(), 3); // find the value 3 in the list
    li.insert(it, 8); // use list::insert to insert the value 8 before it

    for (it = li.begin(); it != li.end(); it++) // for loop with iterators
        cout << *it << " ";

    cout << endl;
}
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    using namespace std;

    vector<int> vect;
    vect.push_back(7);
    vect.push_back(-3);
    vect.push_back(6);
    vect.push_back(2);
    vect.push_back(-5);
    vect.push_back(0);
    vect.push_back(4);

    sort(vect.begin(), vect.end()); // sort the list

    vector<int>::const_iterator it; // declare an iterator
    for (it = vect.begin(); it != vect.end(); it++) // for loop with iterators
        cout << *it << " ";

    cout << endl;

    reverse(vect.begin(), vect.end()); // reverse the list

    for (it = vect.begin(); it != vect.end(); it++) // for loop with iterators
        cout << *it << " ";

    cout << endl;
}

--------------------------------------------------------------
-------------------------------------------------------------
----container overviw


#include <vector>
#include <iostream>
int main()
{
    using namespace std;

    vector<int> vect;
    for (int nCount=0; nCount < 6; nCount++)
        vect.push_back(10 - nCount); // insert at end of array

    for (int nIndex=0; nIndex < vect.size(); nIndex++)
        cout << vect[nIndex] << " ";

    cout << endl;
}

#include <iostream>
#include <deque>
int main()
{
    using namespace std;

    deque<int> deq;
    for (int nCount=0; nCount < 3; nCount++)
    {
        deq.push_back(nCount); // insert at end of array
        deq.push_front(10 - nCount); // insert at front of array
    }

    for (int nIndex=0; nIndex < deq.size(); nIndex++)
        cout << deq[nIndex] << " ";

    cout << endl;
}


--------------------------------------------------------------
-------------------------------------------------------------
----iterator overviw

#include <iostream>
#include <vector>
int main()
{
    using namespace std;

    vector<int> vect;
    for (int nCount=0; nCount < 6; nCount++)
        vect.push_back(nCount);

    vector<int>::const_iterator it; // declare an read-only iterator
    it = vect.begin(); // assign it to the start of the vector
    while (it != vect.end()) // while it hasn't reach the end
        {
        cout << *it << " "; // print the value of the element it points to
        it++; // and iterate to the next element
        }

    cout << endl;
}


#include <iostream>
#include <list>
int main()
{
    using namespace std;

    list<int> li;
    for (int nCount=0; nCount < 6; nCount++)
        li.push_back(nCount);

    list<int>::const_iterator it; // declare an iterator
    it = li.begin(); // assign it to the start of the list
    while (it != li.end()) // while it hasn't reach the end
    {
        cout << *it << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }

    cout << endl;
}


#include <iostream>
#include <set>
int main()
{
    using namespace std;

    set<int> myset;
    myset.insert(7);
    myset.insert(2);
    myset.insert(-6);
    myset.insert(8);
    myset.insert(1);
    myset.insert(-4);

    set<int>::const_iterator it; // declare an iterator
    it = myset.begin(); // assign it to the start of the set
    while (it != myset.end()) // while it hasn't reach the end
    {
        cout << *it << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }

    cout << endl;
}

#include <iostream>
#include <map>
#include <string>
int main()
{
    using namespace std;

    map<int, string> mymap;
    mymap.insert(make_pair(4, "apple"));
    mymap.insert(make_pair(2, "orange"));
    mymap.insert(make_pair(1, "banana"));
    mymap.insert(make_pair(3, "grapes"));
    mymap.insert(make_pair(6, "mango"));
    mymap.insert(make_pair(5, "peach"));

    map<int, string>::const_iterator it; // declare an iterator
    it = mymap.begin(); // assign it to the start of the vector
    while (it != mymap.end()) // while it hasn't reach the end
    {
        cout << it->first << "=" << it->second << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }

    cout << endl;
}

