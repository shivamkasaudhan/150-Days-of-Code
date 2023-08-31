// 2396. Strictly Palindromic Number
//tc
//sc
//code
class Solution 
{
public:
    bool isPalindrome(string s)
    {
        int l = 0;
        int r = s.length()-1;
        while(l<=r)
        {
            if(s[l]!=s[r]) return false;
            l++; r--;
        }
        return true;
    }
    bool func(int n, int i)
    {
        string b = "";
        while(n!=0)
        {
            b+=to_string(n%i);
            n/=i;
        }    
        return isPalindrome(b);
    }
    bool isStrictlyPalindromic(int n) 
    {
        for(int i=2; i<n-1;i++)
        {
            int temp = n;
            if(func(temp,i)==false)
            {
                return false;
            }
        }
        return true;
    }
};