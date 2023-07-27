#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> a, int n, vector<int> b, int m)
{
    vector<int> v;
    int i = 0;
    while (i < n)
    {
        v.push_back(a[i]);
        i++;
    }
    i = 0;
    while (i < m)
    {
        v.push_back(b[i]);
        i++;
    }
    for (int k = 1; k <  v.size(); k++)
    {
        int key = v[k];
        int c = k - 1;
        while (c >= 0 && v[c] > key)
        {
            v[c + 1] = v[c];
            c--;
        }
        v[c + 1] = key;
    }
    cout << "Merged Array is " << endl;
        for (auto l : v)
    {
        cout << l << " ";
    }

}
int main()
{
    vector<int> v1 = {1, 3, 7, 9, 22};
    vector<int> v2 = {2, 6, 14, 44, 555};
    merge(v1, v1.size(), v2, v2.size());
    return 0;
}