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
        
        int n;
        cin >> n;
        
        int data[10][10];
        
        cout << "#" << test_case << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) {
                if(j==0 || i==j) {
                    data[i][j] = 1;
                } else {
                    data[i][j] = data[i-1][j-1] + data[i-1][j];
                }
                
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
        
		/////////////////////////////////////////////////////////////////////////////////////////////

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}