class Solution {
public:
    double myPow(double x, int n) {
        long binary=n;
        double ans=1;
        if(binary<0){
            binary=-binary;
            x=1/x;
        }
        if(x==1){
            return 1;
        }
        if(x==0){
            return 0;
        }
        if(x==-1 && n%2==0){
            return 1;
        }
        if(x==-1 && n%2!=0){
            return -1;
        }
        if(n==0){
            return 1;
        }
        while(binary>0){
            if(binary%2==1){
                ans*=x;
            }
        x*=x;
        binary=binary/2;
        }
        return ans;
    }
};