class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0) return 0;
      double count=0;
      int rev=x;
     while(rev!=0){
        count=rev%10+count*10;
       rev=rev/10;
     }

    return x==count;
    }
};