//weekly-contest-360
//(i) 8015. Furthest Point From Origin
//tc O(n)
//sc O(1)
//code
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int Lcount=0;
        int Rcount=0;
        int _count=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') Lcount++;
            if(moves[i]=='R') Rcount++;
            if(moves[i]=='_') _count++;
        }
        int net = Rcount - Lcount + ((Rcount >= Lcount) ? _count : -_count);
        return abs(net);
        
    }
};