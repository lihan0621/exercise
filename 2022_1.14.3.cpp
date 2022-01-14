#include <iostream>

using namespace std;

class Solution {
public:
	int numWays(int n) {
		long A[2][2]={ 1, 1, 0, 0 };  //ԭ����
		long B[2][2]={ 0, 1, 1, 1 };  //���߾���
		long C[2][2]={ 1, 0, 0, 1 };  //��λ����
		while(n) {  //������
			if(n&1) muti(C, B);
			n>>=1;
			muti(B, B);
		}
		muti(A, C);
		return A[0][0]%M;
	}
	const int M=1e9+7;
	void muti(long(*A)[2], long(*B)[2]) {
		long C[2][2]={ 0, 0, 0, 0 };
		for(int i=0; i<2; ++i)    //����˷���warshall�㷨
			for(int j=0; j<2; ++j)
				for(int k=0; k<2; ++k)
					C[i][j]+=(A[i][k]*B[k][j])%M;
		for(int i=0; i<2; ++i)   //A *= B
			for(int j=0; j<2; ++j)
				A[i][j]=C[i][j];
	}
};

void test()
{
	Solution s;
	int res=s.numWays(7);
	cout<<res<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}