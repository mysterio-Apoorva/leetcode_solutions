class Solution {
public:
    int countCommas(int n) {
        int length=0;
        int x=n;
        while(n!=0)
        {
            n=n/10;
            length++;
        }
        if(length<=3)
        return 0;
        else if(length==4)
        return x-1000+1;
        else
        return x-1000+1;
    }
};