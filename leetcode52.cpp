// 1832. Check if the Sentence Is Pangram
//tc O(n) [ O(n+26) ] n is the size of given sentence and 26 itretion from second for loop
//sc = O(1) because the size of count array is consist of only 26 diffrent values 
//100% beats 
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count[26]={0};
        for(int i=0;i<sentence.size();i++){
            int temp= sentence[i]-'a';
            count[temp]++;
        }
        for(int i=0;i<26;i++){
            if(count[i]==0){
                return false;
            }
        }
        return true;
        
    }
};
