class Solution {
public:
    bool isPalindromeBrute(string s) {
        string cleaned = "";
        
        // Step 1: Filter out non-alphanumeric and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
        
        // Step 2: Create a reversed version of the cleaned string
        string reversed_s = cleaned;
        reverse(reversed_s.begin(), reversed_s.end());
        
        // Step 3: Compare
        return cleaned == reversed_s;
    }

    bool isPalindromeOptimal(string s) {
        int start = 0, end = s.length() - 1;
			while(start < end)
			{
                if(!isalnum(s[start])) start++;
                else if(!isalnum(s[end])) end--; 
				else
                {
                    if(tolower(s[start]) != tolower(s[end])) return false;
                    start++;
                    end--;
                }
			}
			return true;
    }
};