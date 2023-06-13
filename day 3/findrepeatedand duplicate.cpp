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

