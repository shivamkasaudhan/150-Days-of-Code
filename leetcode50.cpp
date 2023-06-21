// 567. Permutation in String
class Solution {
private:
    bool checkequal(int a[26], int b[26]){
        for(int i=0;i<26;i++){  
            if(a[i]!=b[i]){
                return false; 
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index =s1[i]-'a';
            count1[index]++;
        }
        int i=0;
        int window_size= s1.length();
        int count2[26]={0};
        while(i<window_size && i<s2.length()){
            int index =s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkequal(count1,count2))
            return true;
        while(i<s2.length()){
            char newch= s2[i];
            int index= newch- 'a';
            count2[index]++;
            char oldch=s2[i-window_size];
            index= oldch- 'a';
            count2[index]--;
            i++;
            if(checkequal(count1,count2)){
                return true;
            }
        }
        return false;
    }
};

