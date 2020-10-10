#include<iostream>

using namespace std;

int data[101];
void init() {
    for(int i = 0; i < 101; i++) {
        data[i] = 0;
    }
}
    

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        init();
		/////////////////////////////////////////////////////////////////////////////////////////////
        
        int n;
        cin >> n;
        
        for(int i = 0; i < 1000; i++) {
            int tmp;
            cin >> tmp;
            
            data[tmp]++;
        }
        
        int max = -1;
        int res = -1;
        for(int i = 0; i < 101; i++) {
            if(max <= data[i]) {
                max = data[i];
                res = i;
            }
        }
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}