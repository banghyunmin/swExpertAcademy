#include<iostream>
#include <string>

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
        
        int value[12];
        for(int i = 2; i <= 11; i++) {
            value[i] = 4;
        }
        value[10] = 16;
        
        int input[52];
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> input[i];
            
            sum += input[i];
            value[ input[i] ]--;
        }
        
        int com[2] = {0, 0};
        string str[2] = {"STOP", "GAZUA"};
        for(int i = 2; i <= 11; i++) {
            if(sum + i > 21) {
                com[0] += value[i];
            } else {
                com[1] += value[i];
            }
        }
        
        int res = 0;
        if(com[0] < com[1]) {
            res = 1;
        }
        
        cout << "#" << test_case << " " << str[res] << endl;
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}