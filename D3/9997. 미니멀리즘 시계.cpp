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
        
        // 12 * 60 = 360 * 2
        // 1도 당 2분
        
        int h = 0;
        int m = n * 2;
        if(m > 59 ) {
            h = m / 60;
            m %= 60;
        }
        
        if(h > 11) {
            h %= 12;
        }
        
        cout << "#" << test_case << " " << h << " " << m << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}