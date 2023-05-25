// 2180. Count Integers With Even Digit Sum
class Solution {
public:
    int countEven(int num) {
        long long int count =0;
        for(int i=1;i<=num;i++){
            long long int j=i,ans=0;
            while(j>0){
                ans +=j%10;
                j/=10;
            }
            if(ans%2==0){
                count++;
            }
        }
        return count;
        
    }
};
