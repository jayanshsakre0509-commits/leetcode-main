class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int digits;
        long rev=0;
        int temp=x;

        while(x!=0){
            digits=x%10;
            rev=rev*10+digits;
            x=x/10;
           
        }
        if(rev==temp){
            return true;
        }else{
            return false;
        }
    }
};