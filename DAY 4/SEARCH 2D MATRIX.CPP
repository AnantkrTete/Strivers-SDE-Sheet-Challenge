class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        
    int m = a.size();
    int n = a[0].size();
    int x = -1;  // Initialize x with a default value

    // Find the row where the target value may exist
    for (int i = 0; i < m; i++) {
        if (target - a[i][n-1] <= 0) {
            x = i;
            break;
        }
    }

    // Check if a valid row was found
    if (x != -1) {
        // Search for the target value in the selected row
        for (int j = 0; j < n; j++) {
            if (target == a[x][j]) {
                return true;
            }
        }
    }

    return false;


    }
};
//WILL PROVIDE BETTER SOLUTION SOON BUT THAT WAS TOUGH TO UNDERSTAND THE O(M*N) COMPLEXITY ONE. I HAVE TO DO BETTER AND FASTER OR I WILLL BE LEFT BEHIND. I HAVE TO DO IT FOR MY FUTURE , I AM NOW IN THE WRITER'S ZONE .
