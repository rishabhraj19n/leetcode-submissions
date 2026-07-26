class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a = INT_MIN;
         int b = INT_MIN;
          int c = INT_MIN;

          int x =  INT_MAX;
          int y = INT_MAX;
          

          for(int& num : nums){
            int olda = a;
            int oldb = b;
            int oldx = x;


            a = max(a,num);
            b = max(b,min(olda,num));
            c = max(c,min(oldb,num));

            x = min(x,num);
            y= min(y,max(oldx,num));
          }
        return max(a*b*c, a*x*y);
    }
};