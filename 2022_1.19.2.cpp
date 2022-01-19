#include <iostream>
#include <vector>
#include <string>

using namespace std;

//12.¾ØÕóÖÐµÄÂ·¾¶
//https://leetcode-cn.com/problems/ju-zhen-zhong-de-lu-jing-lcof/
class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		rows=board.size();
		cols=board[0].size();
		for(int i=0; i<rows; i++) {
			for(int j=0; j<cols; j++) {
				if(dfs(board, word, i, j, 0)) return true;
			}
		}
		return false;
	}
private:
	int rows, cols;
	bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
		if(i>=rows||i<0||j>=cols||j<0||board[i][j]!=word[k]) return false;
		if(k==word.size()-1) return true;
		board[i][j]='\0';
		bool res=dfs(board, word, i+1, j, k+1)||dfs(board, word, i-1, j, k+1)||
			dfs(board, word, i, j+1, k+1)||dfs(board, word, i, j-1, k+1);
		board[i][j]=word[k];
		return res;
	}
};

void test2()
{
	vector<vector<char>> board={ {'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
	string word="ABCCED";
	Solution s;
	bool res=s.exist(board, word);
	cout<<res<<endl;
}

void main2()
{
	test2();
	system("pause");
}