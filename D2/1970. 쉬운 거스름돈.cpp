#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
        
        int others[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
        int data[8] = {0, };
        int m;
        cin >> m;
        
        int tmp = m;
        for(int i = 0; i < 8; i++) {
            data[i] += tmp / others[i];
            tmp %= others[i];
        }
        
        cout << "#" << test_case << endl;
        for(int i = 0; i < 8; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}