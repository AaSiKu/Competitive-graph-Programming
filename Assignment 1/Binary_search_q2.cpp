int NthRoot(int n, int m) {
  // Write your code here.
  int left = 1;
  int right = m;
  int mid = 0;
  long long int prod = 1;
  while (left <right){
    mid = (left + right) /2;
    prod = 1;
    for (int x =0;x<n;x++){
      prod*=mid;
      prod = prod%1000000007;
    }
    if (prod ==m){
      return mid;
    }
    else if (prod>m){
      right = mid -1;
    }
    else if (prod<m){
      left =mid+1;
    }
  }
  return -1;
}