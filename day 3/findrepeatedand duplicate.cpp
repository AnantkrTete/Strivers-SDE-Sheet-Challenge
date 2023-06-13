vector<int> Solution::repeatedNumber(const vector<int> &A) {
    

    int n = A.size();
    vector<int> freq(n +1, 0);  // Initialize the freq array with size n+1 to accomodate all the possible integers from 1 to n

    int repeated = -1;
    int missing = -1;

    for (int i = 0; i < n; i++) {
        if (freq[A[i]] == 0) {
            freq[A[i]] += 1;
        } else {
            repeated = A[i];
        }
    }

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            missing = i;
            break;
        }
    }

    vector<int> result;
    result.push_back(repeated);
    result.push_back(missing);

    return result;
}
//optimal approach below using maths
vector<int> Solution::repeatedNumber(const vector<int> &a) {
    long long n=a.size();
    long long sn;
    sn=(n*(n+1))/2;
    long long sn2;
    sn2=(n*(n+1)*((2*n)+1))/6;
    long long s=0, s2=0;
    long long val1;
    long long val2;
    for(int i=0;i<n;i++){
        s+=a[i];
        s2+=(long long)a[i]*(long long)a[i];
    }
    val1=s-sn;
    val2=(s2-sn2)/val1;
    long long x=(val1+val2)/2;
    long long y=val2-x;
    return {x,y};
    }

