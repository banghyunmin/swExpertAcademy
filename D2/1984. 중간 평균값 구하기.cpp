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
        
        int data[10];
        for(int i = 0; i < 10; i++) {
            cin >> data[i];
        }
        
        for(int i = 0; i < 10; i++) {
	        for(int j = 0; j < 10; j++) {
                if(data[i] < data[j]) {
                    int tmp = data[i];
                    data[i] = data[j];
                    data[j] = tmp;
                }
            }
        }
        
        int res = 0;
        for(int i = 1; i < 9; i++) {
            res += data[i];
        }
        
        cout<<fixed;
        cout.precision(0);
        cout << "#" << test_case << " " << res/8.0 << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}