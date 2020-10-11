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
        
        int all;
        int a, b;
        
        cin >> all >> a >> b;
        
        int small, big;
        if(a < b) {
            small = a;
            big = b;
        } else {
            small = b;
            big =  a;
        }
        
        int min, max;
        max = small;
        min = big + small - all;
        if(min < 0) min = 0;
        
        cout << "#" << test_case << " " << max << " " << min << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}