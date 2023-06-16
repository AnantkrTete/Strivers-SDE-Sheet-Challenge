class Solution {
public:
    double myPow(double x, int n) {
         double ans = 1.0;
  long long nn = n;
  if (nn < 0) nn = -1 * nn;
  while (nn) {
    if (nn % 2) {
      ans = ans * x;
      nn = nn - 1;
    } else {
      x = x * x;
      nn = nn / 2;
    }
  }
  if (n < 0) ans = (double)(1.0) / (double)(ans);
  return ans;
    }
};
// OK SO THIS ONE WAS A KIND OF HARD HAD TO REALLY PLAY WITH THE INDEXES AND THE CASES AND THE FLOW OF THE CODE MUST BE CLEAR TO BEGIN WITH ALTEAST I GOT STUCK WITH THAT REALLY GENIUS SOLUTON FROM STRIVER SIR FOR EVER AND ODD CASES TO BE HANDLED SEPERATELY I ALSO THOUGHT OF A SOL BUT SOMEHOW THAT WAS LIKE TO HOLD MY EAR FROM THE BACK OF MY HEAD. GOT CONFUSED.
