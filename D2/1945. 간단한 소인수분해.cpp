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
        
        long long int n;
        cin >> n;
        
        int data[5] = {2, 3, 5, 7, 11};
        int res[5] = {0, };
        for(int i = 0; i < 5; i++) {
            while(n%data[i] == 0) {
                res[i]++;
                n /= data[i];
            }
        }
        
        cout << "#" << test_case << " ";
        for(int i = 0; i < 5; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}