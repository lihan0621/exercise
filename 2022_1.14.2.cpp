#include <iostream>

using namespace std;

/*
class Solution {
public:
    int fib(int n) {
        if (n <= 0){
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        }
        int* record = new int[n + 1];
        record[0] = 0;
        record[1] = 1;
        for (int i = 2; i <= n; i++){
            record[i] = record[i - 1] + record[i - 2];
        }
        return record[n];
        delete[] record;
    }
};
*/
/*
class Solution {
public:
    int fib(int n){
        if (n <= 0){
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        }
        int fn1 = 1;
        int fn2 = 1;
        int result = 0;
        for (int i = 3; i <= n; i++){
            result = fn2 + fn1;
            fn1 = fn2;
            fn2 = result;
        }
        return result;
    }
};
*/

class Solution{
public:
    int fib(int n){
        if (n <= 0){
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        }
        return fib(n - 2) + fib(n - 1);
    }
};


void test2()
{
    Solution s;
    int res=s.fib(45);
    cout<<res<<endl;
}

int main2()
{
    test2();
    system("pause");
    return 0;
}