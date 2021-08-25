#include<iostream>
#include<vector>
using namespace std;



   
class Solution {
public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> enough ;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max)
                max = candies[i];
        }
        for (int i = 0; i < candies.size(); i++){
            if (extraCandies + candies[i] == max)//ناقص خطوه كم نحتاج ناخذ من الاكسترا
                enough.push_back(true);
            else

                enough.push_back(false);
        }
         return enough;
         /*std::ostream& operator<<(std::ostream & out, const Solution & s) {
         
             out << s.kidsWithCandies();
             return out;
         }*/
    }
       
};

int main() {

    vector<int> candies = {2,3,5,1,3};
    int extra = 3;
    Solution s;
    
   cout<< s.kidsWithCandies(candies,extra);
}