// 2391. Minimum Amount of Time to Collect Garbage
//tc O(n+m*k)
//sc O(1)
//code
class Solution {
public:
    int garbageCollection(vector<string>& garb, vector<int>& trav) {
        int sum=0;
        int k=0;
        int mi=-1,gi=-1,pi=-1;
        for(int i=1;i<trav.size();i++)trav[i]=trav[i-1]+trav[i];
        for(auto x:garb){
            for(auto c:x){
                sum++;
                if(c=='M')mi=k;
                if(c=='P')pi=k;
                if(c=='G')gi=k;
            }
            k++;
        }
         sum+= ((mi>0)?trav[mi-1]:0);
         sum+= ((gi>0)?trav[gi-1]:0);
         sum+= ((pi>0)?trav[pi-1]:0);
        return sum;
         
    }
};
