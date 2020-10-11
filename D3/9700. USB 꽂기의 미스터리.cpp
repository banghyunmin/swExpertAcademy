#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
        
        float p, q;
        cin >> p >> q;
        
        // 1. 그냥 성공 p * q
        // 2. 한번 뒤집 성공 (1-p) * q
        // 3. 두번 뒤집 성공 p * (1-q) * q
        
        string str[2] = {"YES", "NO"};
        int res = 1;
        if( (1-p) * q < p * (1-q) * q) {
            res = 0;
        }
        
        cout << "#" << test_case << " " << str[res] << endl;
            
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}