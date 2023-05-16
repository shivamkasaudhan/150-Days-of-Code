#include &lt;bits/stdc++.h&gt;
using namespace std;

int main()
{
    int n;
    cin &gt;&gt; n;
    cin.ignore(numeric_limits&lt;streamsize&gt;::max(), '\n');

    // Write Your Code Here
     string word[10] = {"" , "one" , "two" , "three" , "four" , "five" , "six" ,"seven" , "eight" , "nine" };
        
    if(n&gt;=1 &amp;&amp; n&lt;=9)
    {
        cout &lt;&lt; word[n];
    }
    else
        cout &lt;&lt; "Greater than 9";
    return 0;
}