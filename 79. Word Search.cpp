class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty() || board[0].empty()) return false;
        int m =board.size(), n =board[0].size();

        for(int i =0;i < m;++i){
            for(int j = 0; j < n ;++j){
                if(search(board,word,0,i,j)) return true;
            }
        }
        return false;
    }
private:
    bool search(vector<vector<char>>& board, string& word, int idx, int i, int j) {
        if (idx == word.size()) return true;
        int m = board.size(), n = board[0].size();
        
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[idx]) return false;
        
        char temp = board[i][j];
        board[i][j] = '*'; // Mark as visited
        
        bool found = search(board, word, idx + 1, i - 1, j) ||
                     search(board, word, idx + 1, i + 1, j) ||
                     search(board, word, idx + 1, i, j - 1) ||
                     search(board, word, idx + 1, i, j + 1);
        
        board[i][j] = temp;
        
        return found;
    }
};