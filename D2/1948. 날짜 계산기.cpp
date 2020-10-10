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
        
        int m1, d1, m2, d2;
        cin >> m1 >> d1 >> m2 >> d2;
        
        int limit[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        
        int days = 1;
        while(m1 <= m2) {
            if(m1 == m2) {
                if(d1 <= d2) {
                    days += d2 - d1;
                } else{
                    days -= d1 - d2;
                }
                m1++;
            } else {
                days += limit[m1++ - 1];
            }
        }
        
        cout << "#" << test_case << " " << days << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}