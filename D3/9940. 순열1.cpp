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
        
        int n;
        cin >> n;
        int data[100001] = {0, };
        
        for(int i = 1; i <= n; i++) {
            int tmp;
            cin >> tmp;
            
            // 입력 값을 인덱스로 하는 배열값을 1로 만듦
            data[tmp] = 1;
        }
        
        // 0이 있는지 확인
        string str[2] = {"Yes", "No"};
        int res = 0;
        for(int i = 1; i <= n; i++) {
            if(data[i] == 0) {
                res = 1;
            }
        }
        
        cout << "#" << test_case << " " << str[res] << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}