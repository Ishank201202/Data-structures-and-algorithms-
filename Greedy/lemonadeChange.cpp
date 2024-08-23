// leetcode 860. Lemonade Change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int bill5 = 0;
        int bill10 = 0;
        int bill20 = 0;
        bool flag=true;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                bill5++;
            }
            if(bills[i]==10)
            {
                if(bill5)
                {
                    bill5--;
                    bill10++;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(bills[i]==20)
            {
                if(bill10 && bill5)
                {
                    bill5--;
                    bill10--;
                    bill20++;
                }
                else if(bill5>=3){
                    bill5=bill5-3;
                    bill20++;
                }
                else{
                    flag=false;
                    break;
                }
            }

        }
        return flag;
    }
};