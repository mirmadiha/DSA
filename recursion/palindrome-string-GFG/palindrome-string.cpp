class Solution {
  public:
  
    bool checkPallindrome(string& s , int size , int i){
        if(i>(size-1)/2){
            return true;
        }
        if(s[i]!=s[(size-i-1)]){
            return false;
        }
        checkPallindrome(s,size,i+1);
    }
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        int size=s.length();
        int i=0;
        return checkPallindrome(s,size,i);
    }
};
