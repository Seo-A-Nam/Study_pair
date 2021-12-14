class Solution {
public:
    string reverseString(string s) {
        int i=0,j=0;
        char tmp;
        int n = s.size();
        j = n-1;
        while(i<j)
        {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++;
            j--;
        }
        return s;
        
    }
    string reverseWords(string s) {
        string newS;
        string tmp = "" ; 
        int j=0;
        for(int i=0 ; i<s.length() ; i++)
        {
            
            if(s[i]==' ')
            {
                tmp = reverseString(tmp);
              
                newS += tmp;
                newS += " "; 
                tmp = "";
                
            }
            else
            {
                tmp += s[i];
                
            }
        }
        tmp = reverseString(tmp);
        newS += tmp;
               
       
        return newS;
        
    }
};