// 1154. Day of the Year
//tc O(1)
// 905 beats
//code
class Solution {
public:
    int dayOfYear(string date) {
        int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        int monthdate= (date[9]-'0')+(date[8]-'0')*10;
        int monthno= (date[6]-'0')+(date[5]-'0')*10;
        int year= (date[0]-'0')*1000 + (date[1]-'0')*100 + (date[2]-'0')*10 + (date[3]-'0');
        int day=0;
        for(int i=0;i<monthno-1;i++){
            day+=month[i];
        }

        day=day + monthdate;
        if((year%100==0 && year%400==0)&& monthno>2){
            return day+1;
        }else if((year%100!=0 && year%4==0) && monthno>2){
            return day+1;
        }
        return day;
    }
};
