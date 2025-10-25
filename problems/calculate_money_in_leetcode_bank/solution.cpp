class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        for(int i=1;i<=n;i++){
            int money = 0;
            if(i%7 == 0){
               money = (i-1)%7 + ((i-1)/7) + 1; 
            }
            else{
                money = (i/7) + (i%7);

            }
            cout<<money<<",";
            ans += money;
        }
        
        return ans;  

    };
    
};