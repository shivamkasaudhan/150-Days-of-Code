/* Biweekly Contest 112
solved 3 out of 4
2 accepted
1 got TLE

(i) 7021. Check if Strings Can be Made Equal With Operations I
tc O(1)
sc O(1)
code 
*/
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        int j=2;
        if(s1==s2){
            return true;
        }else if(s1[0]==s2[0]){
            swap(s2[1],s2[3]);
        }else if(s1[1]==s2[1]){
            swap(s2[0],s2[2]);
        }else{
            while(j<4){
                swap(s2[i],s2[j]);
                i++;
                j++;
            }   
        }
        return s1==s2;
    }
};

//(ii) 7005. Check if Strings Can be Made Equal With Operations II
//tc O(n)
//sc O(n)
//code
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        string evenS1="",evenS2="", oddS1="",oddS2="";
        for(int i=0;i<s1.size();i++){
            if(i%2==0){
                evenS1+=s1[i];
                evenS2+=s2[i];
            }else{
                oddS1+=s1[i];
                oddS2+=s2[i];
            }
        }
        sort(evenS1.begin(),evenS1.end());
        sort(evenS2.begin(),evenS2.end());
        sort(oddS1.begin(),oddS1.end());
        sort(oddS2.begin(),oddS2.end());
        return (evenS1==evenS2 && oddS1==oddS2);
        
    }
};
 
// (iii) 2841. Maximum Sum of Almost Unique Subarray (Time LImit Exceeded)
//tc O(n*k)
//sc O(k)
//code
class Solution {
public:
    
    long long maxSum(vector<int>& nums, int m, int k) {
        long long ans=0;
        for(int i=0;i<=nums.size()-k; i++){
            long long sum=0;
            set<int> distinct_elements;
            for(int j=i;j<i+k;j++){
                distinct_elements.insert(nums[j]);
                sum+=nums[j];
            }
            if(distinct_elements.size()>=m){
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};