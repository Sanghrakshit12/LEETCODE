#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> a, int n, vector<int> b, int m)
{
    vector<int> v;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i<n){
          v.push_back(a[i]);
            i++;
    }
    while(j<m){
         v.push_back(b[j]);
            j++;
    }
    for(auto k:v){
        cout<<k<< " ";
    }

}
int main()
{
    vector<int> v1 = {1, 3, 7, 9, 22};
    vector<int> v2 = {2, 6, 14, 44, 555};
    merge(v1, v1.size(), v2, v2.size());
    return 0;
}