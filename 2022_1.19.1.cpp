#include <iostream>
#include <queue>

using namespace std;

//13.�����˵��˶���Χ
//https://leetcode-cn.com/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof/
/*
class Solution {
	// ���� x ����λ֮��
	int get(int x) {
		int res=0;
		for(; x; x/=10) {
			res+=x%10;
		}
		return res;
	}
public:
	int movingCount(int m, int n, int k) {
		if(!k) return 1;
		queue<pair<int, int> > Q;
		// ���Һ����µķ�������
		int dx[2]={ 0, 1 };
		int dy[2]={ 1, 0 };
		vector<vector<int> > vis(m, vector<int>(n, 0));
		Q.push(make_pair(0, 0));
		vis[0][0]=1;
		int ans=1;
		while(!Q.empty()) {
			auto [x, y]=Q.front();
			Q.pop();
			for(int i=0; i<2; ++i) {
				int tx=dx[i]+x;
				int ty=dy[i]+y;
				if(tx<0||tx>=m||ty < 0||ty>=n||vis[tx][ty]||get(tx)+get(ty) > k) continue;
				Q.push(make_pair(tx, ty));
				vis[tx][ty]=1;
				ans++;
			}
		}
		return ans;
	}
};
*/
class Solution {
	int get(int x) {
		int res=0;
		for(; x; x/=10) {
			res+=x%10;
		}
		return res;
	}
public:
	int movingCount(int m, int n, int k) {
		if(!k) return 1;
		vector<vector<int> > vis(m, vector<int>(n, 0));
		int ans=1;
		vis[0][0]=1;
		for(int i=0; i<m; ++i) {
			for(int j=0; j<n; ++j) {
				if((i==0&&j==0)||get(i)+get(j)>k) continue;
				// �߽��ж�
				if(i-1>=0) vis[i][j]|=vis[i-1][j];
				if(j-1>=0) vis[i][j]|=vis[i][j-1];
				ans+=vis[i][j];
			}
		}
		return ans;
	}
};

void test1()
{
	Solution s;
	int res=s.movingCount(2, 3, 1);
	cout<<res<<endl;
}

void main1()
{
	test1();
	system("pause");
}