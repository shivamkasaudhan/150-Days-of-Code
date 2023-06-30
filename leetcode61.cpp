// 383. Ransom Note
//tc O(m+n) m= size of magazine , n= size of ransomNote
//100% beats
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};
        int count1[26]={0};
        for(int i=0;i<magazine.size();i++){
            int index = magazine[i]-'a';
            count[index]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            int index = ransomNote[i]-'a';
            count1[index]++;
        }
        for(int i=0;i<26;i++){
            if(count[i]<count1[i]){
                return false;
            }
        }
        return true;
        
    }
};
