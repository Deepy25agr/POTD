class Solution {
    public:
        double myPow(double x, long n) {
            
            // double mul=1;
            // if(n>=0){
            // for(long i=1;i<=n;i++){
            //     mul*=x;
                
            // }
            // }
            // if(n<0){
            //     mul=1/myPow(x,(-n));
            // }
            // return mul;
    
            // return pow(x,n);
          
            if(n==0) return 1;
            if(n<0) {
                n = abs(n);
                x = 1/x;
            }
            if(n%2==0){
                return myPow(x*x, n/2);
            }
            else{
                return x*myPow(x, n-1);
            }
            
        }
    };