#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;
/*class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        for (int i = 0; i < costs.size(); i++) {
            for (int j = i + 1; j < costs.size(); j++) {

                 if(costs[i]> costs[j]){

                     int temp=costs[i];
                     costs[i]=costs[j];
                     costs[j]=temp;}

                if (costs[i + j] == coins)
                    count++;



            }

        }
        return count;
    }
};
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {

                if (grid[i][j] < 0)
                    count++;
            }
        }

        return count;

    }
};

int main() {
    vector<vector<int>> arr[10][10] = { {5,1,0},{-5,-5,-5 } };
    Solution s;
    s.countNegatives(arr);

}


int main() {
    vector <int > cost = { 1,3,2,4,1 };
    int coins = 7;
    Solution s;
   cout<< s.maxIceCream(cost, coins);
}*/

class solution {
public:
    int maxicecream(vector<int>& costs, int coins) {
        int count = 0;
        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size() && coins > 0; i++) {
             
                 coins -= costs[i];
           if (coins >= 0)
                count++;
        }
        return count;
    }
 };   


int main() {

    vector<int> costs = { 1,3,2,4,1 };
    int coins = 7;
    solution s;
   cout<< s.maxicecream(costs, coins);
}



