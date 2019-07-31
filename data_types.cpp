#include <iostream>
#include <vector> 
#include <map>
#include <tuple>
#include <set>
#include <array>
using std::cout;
using std::endl;
using std::vector;
using std::map;
using std::string;
using std::tuple;
using std::make_tuple;
using std::tuple_size;
using std::get;
using std::set;
using std::array;

int main()
{
    // Vectors
    cout << "Vectors:" << endl;

    vector<double> vec;
    vec.push_back(7);
    vec.push_back(11);
    vec.push_back(42);

    for (auto& v : vec)
    {
        cout << v << endl;
        ++v;
    }

    for (auto& v : vec)
    {
        cout << v << endl;  // Still works outside the scope where it was incremented
    }

    // Maps
    cout << "Maps:" << endl;

    map<char, string> dir;
    dir['A'] = string("south");
    dir['B'] = string("north");
    dir['C'] = string("east");
    dir['D'] = string("west");

    for (const auto& d : dir)
    {
        cout << "dir[" << d.first << "] = " << d.second << endl;
    }

    // Tuples
    cout << "Tuples:" << endl;

    tuple<char, string, double, int> tup ('A',"Fish",3.14,6);
    
    const int ii = 2; 
    cout << get<ii>(tup) << endl;

    // Sets
    cout << "Sets:" << endl;

    set<int> s;
    
    for (int i = 0; i < 5; i++)
    {
        s.insert(i);
    }

    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;

    // Arrays
    cout << "Arrays:" << endl;

    array<double,4> a;
    a.fill(1.);
    a[2] = 3.;

    for (auto val : a)
    {
        cout << val << ' ';
    }
    cout << endl;

    return 0;
}
