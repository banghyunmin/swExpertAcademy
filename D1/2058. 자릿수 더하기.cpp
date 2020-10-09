#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    /////////////////////////////////////////////////////////////////////////////////////////////
    
    int n;
    cin >> n;
    
    int tmp = n;
    int res = 0;
    for(int i = 0; tmp > 0; i++) {
        res += tmp%10;
        tmp /= 10;
    }
    
    cout << res << endl;
    
    /////////////////////////////////////////////////////////////////////////////////////////////
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}