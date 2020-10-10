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
        
        int n, m; // nxn 배열, m크기 파리채
        int data[16][16]; // n은 최대 15;
        
        cin >> n >> m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cin >> data[i][j];
            }
        }
        
        // 00000
        int max = 0;
        int tmp;
        for(int i = 0; i < n-m+1; i++) {
            for(int j = 0; j < n-m+1; j++) {
                // 파리채
                tmp = 0;
                for(int a = 0; a < m; a++) {
                    for(int b = 0; b < m; b++) {
                        tmp += data[i+a][j+b];
                    }
                }
                
                if(max < tmp) {
                    max = tmp;
                }
            }
        }
        
        cout << "#" << test_case << " " << max << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}