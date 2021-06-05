// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends

class Solution {
  public:
    bool PalinCheck (string Sub1)
    {
        int lenSub = Sub1.length(),i;
        int rear = lenSub - 1;
        int flag = -1;
        for(i = 0; i < lenSub/2; i++)
        {
            if(Sub1[i] == Sub1[rear])
            {
                rear--;
                continue;
            }
            else
                return false;
        }
        if(flag == -1)
            return true;
        else
            return false;
    }
    string longestPalin (string S) {
        // code here
        string maxPalin = "";
        int S_len = S.length();
        if(S_len < 1 || S_len > 1000)
            exit(0);
        int window = S_len;
        int till,i,flag=-1;
        while(window >= 1)
        {
            if(flag != -1)
                break;
            till = S_len - window;
            i = 0;
            while(i <= till)
            {
                string substr1 = S.substr(i,window);
                bool palinchk = PalinCheck(substr1);
                if(palinchk == true)
                {
                    maxPalin = substr1;
                    flag = 0;
                    break;
                }
                i++;
            }
            window--;
        }
        return maxPalin;
    }
    
    
};
// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
