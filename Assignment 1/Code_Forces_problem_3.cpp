// https://codeforces.com/problemset/problem/1476/A

# include <bits/stdc++.h>
using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    for (int x =0;x<test_cases;x++){
        int n, k;
        cin>>n>>k;
        if (k<n){
            if (n%k == 0){
                k = n;
            }else{
                k = k*(n/k+1);}
        }
        if (k%n == 0){
            cout<<k/n<<endl;
        }else{
            cout<<k/n+1<<endl;
        }
    }
    
}