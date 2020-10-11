#include<iostream>

using namespace std;
int chkCross(int st1, int en1, int st2, int en2) {
    int val1 = st1 - st2;
    int val2 = en1 - en2;
    if(val1 * val2 < 0) {
        return 1;
    }
    return 0;
}

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
        
        int cnt = 0;
        int x[1001];
        int y[1001];
        for(int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
            
            for(int j = 0; j < i; j++) {
                if(chkCross(x[i], y[i], x[j], y[j]) == 1) {
                    cnt++;
                }
            }
        }
        
        cout << "#" << test_case << " " << cnt << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}