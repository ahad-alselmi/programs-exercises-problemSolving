#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
  int countGoodRectangles(vector<vector<int>>& rectangles) {
      vector<int> maxlen;
        
        int count = 0;
        for (int i = 0; i < rectangles.size(); i++) {
            for (int j = 0; j < rectangles.size(); j++) {

                if(rectangles[i][0]<rectangles[i][1]){
                    int temp = rectangles[i][0];
                    rectangles[i][0] = rectangles[i][1];
                    rectangles[i][1]= temp;
                    maxlen.push_back(rectangles[i][1]);
                    
                }//if
          }//for j
        }//for i
          int max = INT_MIN;
        for (int k = 0; k < maxlen.size(); k++) {
            if (maxlen[k] >max ) {
                max = maxlen[k];
                if(max>maxlen[k+1])
                count ++;
               }
                
            
        }
        return count;
    }
};

int main() {
    vector<vector<int>> rectangles = { {5, 8},{3, 9},{3, 12} };
       
    Solution s;
    cout<<s.countGoodRectangles(rectangles);

}


/*class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int, int> squares;
        for (int i = 0; i < rectangles.size(); i++) {
            int squar = rectangles[i][0] > rectangles[i][1] ? rectangles[i][1] : rectangles[i][0];

            if (squares.find(squar) != squares.end()){//اذالم يساوي النهايه يعني انه موجود بالتالي زود العداد 
            squares[squar]++;
        }//if
            else {
                squares[squar] = 1; //يعني انه ليس موجود بالتالي اجعل قيمة 1
            }
        }//for
        int max = INT_MIN;
        for (map<int, int>::iterator it = squares.begin(); it != squares.end(); it++) {
            if (it->first > max)
                max = it->second;
        }
        return max;
    }//function
};


int main() {
    vector<vector<int>> rectangles = { {5, 8},{3, 9},{5, 12},{16, 5 } };
    Solution s;
    cout<< s.countGoodRectangles(rectangles);

}*/