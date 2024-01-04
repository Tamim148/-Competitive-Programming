
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
                cout<<lsf<<" "<<prices[i]<<endl;
            }
            pist = prices[i] - lsf;
            cout<<pist<<endl;
            if(op < pist){
                op = pist;
                cout<<op<<" "<<pist<<endl;
            }
             cout<<op<<" "<<pist<<endl;
        }
        return op;
    }
};
