class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result{{1},{1,1}};

        if(numRows==1){
            return {{1}};
        } else if(numRows==2){
            return {{1},{1,1}};
        } else {
            while(numRows > 2){
                vector<int> nextRow, prevRow;

                int latest_index = result.size()-1;
                prevRow = result[latest_index];

                nextRow.push_back(1);
                for(int i=0; i<prevRow.size()-1; i++){
                    nextRow.push_back(prevRow[i]+prevRow[i+1]);
                }
                nextRow.push_back(1);

                result.push_back(nextRow);

                numRows--;
            }
            return result;
        }

        return {};
    }
};