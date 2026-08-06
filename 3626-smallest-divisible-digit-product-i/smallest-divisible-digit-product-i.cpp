class Solution {
public:
    int smallestNumber(int n, int t) {
       
       
        while (true) {
             int product = 1;
             int last=0;
             int a=n;
            while (a>0) {
                last = a % 10;
                product *= last;
                a = a / 10;
            }

            if (product % t == 0) {
                return n;
            }
            n++;
        }
        return 0;
    }
};