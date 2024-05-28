#include <bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	// cout << "Input number is " << num << endl;	// Writing output to STDOUT
	int arr[num];
	for (int x =0;x<num;x++){
		cin>>arr[x];
	}
	int *A = arr;
	int *B = arr+num-1;
	vector<int> ans;
	while(A != arr+num && B!=arr-1){
		if (*A > *B){
			ans.push_back(1);
			B--;
		}
		else if (*A<*B){
			ans.push_back(2);
			A++;
		}
		else{
			ans.push_back(0);
			A++;
			B--;
		}
	}
	for (int x: ans){
		cout<<x<<' ';
	}

}