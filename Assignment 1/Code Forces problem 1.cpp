#include <iostream>
#include <string>
#include <vector>
using namespace std;

int CountCuts(string s){
    int count = 1;
    int found_01 = 0;
    int prev = -1;
    for(int i=0; i<s.size(); i++){
        if (prev ==-1){
            // printf("<");
            prev = s[i];
            continue;
        }
        else if (prev == s[i]){
            // printf(">");
            prev = s[i];
            continue;
        }
        else if (prev != s[i] && found_01 == 0 && prev == '0'){
            found_01 = 1;
            // printf("?");
            prev = s[i];
            continue;
        }
        prev= s[i];
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0; i<n; i++){
        cout<<CountCuts(v[i])<<endl;
    }

}