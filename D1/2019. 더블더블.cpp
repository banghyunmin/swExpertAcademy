#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    int n;
    cin >> n;
    
    int res = 1;
    cout << res << " ";
    for (int i = 1; i <= n; i++) {
        res *= 2;
    	cout << res << " ";
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}