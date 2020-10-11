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
        
        int data[10000];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> data[i];
            
            sum += data[i];
        }
        
        float avg = sum / (float)n;
        
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if( data[i] <= avg) {
                cnt++;
            }
        }
        
        cout << "#" << test_case << " " << cnt << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}