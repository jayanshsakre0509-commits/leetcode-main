class Solution {
public:
    bool isPalindrome(int x) {
        int carry=x;
        long digits ;
        long  sol=0;

        if(x<0)return false;
       while(x!=0){
            digits=x%10;
            sol=sol*10+digits; 
            x=x/10;
        }
        if(sol==carry){
            return true;
        }else
       { return false;}
    
        
    }
};