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
        
        int n, m;
        cin >> n >> m;
        
        int a[20];
        int b[20];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }
        
        int gap;
        int max = 0;
        int tmp;
        if(n < m) {
            gap = m - n;
            for(int i = 0; i <= gap; i++) {
                tmp = 0;
                for(int j = 0; j < n; j++) {
                    tmp += a[j] * b[j + i];
                }
                if(max < tmp) {
                    max = tmp;
                }
            }
        } else {
            gap = n - m;
            for(int i = 0; i <= gap; i++) {
                tmp = 0;
                for(int j = 0; j < m; j++) {
                    tmp += b[j] * a[j + i];
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