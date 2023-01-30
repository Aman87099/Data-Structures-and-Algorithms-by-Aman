class Solution {
public:
    int tribonacci(int n) {
   if (n == 0)
    return 0;

  if (n < 3)
    return 1;

  int x = 0, y = 1, z = 1, ans;

  for (int i = 3; i <= n; i++) {
    ans = x + y + z;
    x = y;
    y = z;
    z = ans;
  }
  return ans;
    }
};