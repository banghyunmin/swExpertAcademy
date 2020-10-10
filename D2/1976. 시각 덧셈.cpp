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
        
        int h1, m1, h2, m2;
        cin >> h1 >> m1 >> h2 >> m2;
        
        int c_m = 0;
        int s_h, s_m;
        s_m = m1 + m2;
        if(s_m > 59) {
            s_m %= 60;
            c_m = 1;
        }
        s_h = h1 + h2 + c_m;
        if(s_h > 11) {
            s_h %= 12;
        }
        if(s_h == 0) s_h = 12;
        
        cout << "#" << test_case << " " << s_h << " " << s_m << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}