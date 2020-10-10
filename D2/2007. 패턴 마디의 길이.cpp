#include<iostream>
#include<string>

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
        
        int flag;
        int res;
        for(int i = 1; i <= 15; i++) {
            flag = 0;
            for(int j = 0; j < i; j++) {
                if(str[i+j] != str[j]) {
                    flag++;
                    break;
                }
            }
            if( flag == 0) {
                res = i;
                break;
            }
        }
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}