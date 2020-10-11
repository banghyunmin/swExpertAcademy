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
        
        string str;
        cin >> str;
        
        int data[10] = {0, };
        for(int i = 0; i < str.length(); i++) {
            data[str[i] - '0'] = !data[str[i] - '0'];
        }
        
        int res = 0;
        for(int i = 0; i < 10; i++) {
            if(data[i] == 1) res++;
        }
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}