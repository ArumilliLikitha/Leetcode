class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int temp=numBottles,count=0;
        while(temp>=numExchange)
        {
            temp=temp-numExchange;
            count+=numExchange;
            temp=temp+1;
        }
        int res=count+temp;
        return res;
    }
};