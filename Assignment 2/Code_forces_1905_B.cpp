#include <bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin >> test_cases;
    map <int, int> m;
    set <int> s;
    for (int i = 0; i < test_cases; i++){
        int edges;
        cin >> edges;
        for (int j = 0; j < edges-1; j++){
            int n, k;
            cin >> n >> k;
            if (s.find(n) == s.end()){
                s.insert(n);
                m[n] = 1;
            }
            else{
                m[n]++;
            }
            if (s.find(k) == s.end()){
                s.insert(k);
                m[k] = 1;
            }
            else{
                m[k]++;
            }
        }
        int no_of_leaves = 0;
        for (int x: s){
            if (m[x] == 1){
                no_of_leaves++;
            }
        }
        cout<<no_of_leaves/2+no_of_leaves%2<<endl;
    }
    return 0;
}