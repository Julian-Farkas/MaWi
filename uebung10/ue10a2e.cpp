#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int j = 0;
    cin >> j;

    vector<int> v;
    for (int i = 1; i <= j; i++)
    {
        int j = 0;
        cin >> j;
        v.push_back(j);
    }

    cout << endl << endl;

    //fn:
    vector<vector<int>> subsets;
    vector<int> single_set;

    subsets.push_back(single_set); // leere Menge
    for (int i=0; i<v.size(); i++)
    {
        int s = subsets.size();
        for (int j=0; j<s; j++)
        {
            single_set = subsets[j];
            single_set.push_back(v[i]);
            subsets.push_back(single_set);

            cout << "i: " << i << " s: " << s << " j: " << j << endl;
        }
    }

    for (vector<int> i : subsets)
    {
        for (int j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

