class Solution {
public:
    bool canAliceWin(int n) {
        int n2=10;
        while(n!=0){
            if(n<n2){
                return false;
            }else{
                n-=n2;
            }
            n2--;
            if(n<n2){
                return true;
            }else{
                n-=n2;
            }
            n2--;
        }
        return false;
    }
};