class Solution {
    
    public:

    bool backspaceCompare(string s, string t) {

        string newstring1(string s) {
            stack<string> f;
            { int hash=0;
                for(int i= s.length();i>0;i--)
                {
                    if(s[i]=="#")
                    {
                        hash++;
                    }
                    if(s[i]!="#" && hash>0)
                    {
                         hash--;
                       continue;
                      
                    }
            
                    else {
                        f.push(s[i]);
                    }
                }
                return f;
            }
            
            string newstring2(string t) {
            stack<string> e;
            { int hash=0;
                for(int i= t.length();i>0;i--)
                {
                    if(s[i]=="#")
                    {
                        hash++;
                    }
                    if(s[i]!="#" && hash>0)
                    {
                         hash--;
                       continue;
                      
                    }
            
                    else {
                        e.push(s[i]);
                    }
                }
                return e;
            }
      newstring1(s);
      newstring2(t);
    
            if(newstring1==newstring2)
            {
                return true;
            }
            else return false;
            
        }
    };