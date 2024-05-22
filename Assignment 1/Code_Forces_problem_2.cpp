// https://codeforces.com/problemset/problem/1971/E
# include <iostream>
# include <set>
# include <math.h>
using namespace std;
int TimeTaken(int t1 , int t2, int p1,int p2,int distance){
    float speed = float(p2-p1)/(t2-t1);
    cout<<speed<<endl;
    cout<<t1<<endl;
    cout<<distance<<endl;
    cout<<int(distance/speed)<<endl;
    return floor(distance/speed)+t1;

}

int main(){
    int test_cases;
    std::cin>>test_cases;
    int n,k,queries;
    for (int x =0;x<test_cases;x++){
        set<int> a = {0};
        set<int> b = {0};
        cin>>n>>k>>queries;
        for (int i=0;i<k;i++){
            int temp;
            cin>>temp;
            a.insert(temp);
        }
        for (int i=0;i<k;i++){
            int temp;
            cin>>temp;
            b.insert(temp);
        }
        for (int i=0;i<queries;i++){
            int v1;
            cin>>v1;
            auto it = a.upper_bound(v1);
            int p2 = *it;
            int p1 = *(--it);

            int index= distance(a.begin(),it);
            auto it1 = b.begin();
            advance(it1,index);
            int t1 = *(it1);
            int t2 = *(++it1);
            cout<<TimeTaken(t1,t2,p1,p2,v1-p1)<<' ';


        }
        cout<<endl;
    }

}