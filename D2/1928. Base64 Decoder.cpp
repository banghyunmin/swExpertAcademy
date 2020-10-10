#include<iostream>
#include<string>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
        
        string str;
        cin >> str;
        
        map<char, int> data;
        int inx = 0;
        for(char i = 'A'; i <= 'Z'; i++) {
            data[i] = inx++;
        }
        for(char i = 'a'; i <= 'z'; i++) {
            data[i] = inx++;
        }
        for(char i = '0'; i <= '9'; i++) {
            data[i] = inx++;
        }
        data['+'] = inx++;
        data['/'] = inx++;
        
        // encoding
        // 8bit * 3 -> 6bit *4
        // 6bit * 4 -> data[ bit[4] ]
        
        // 우리가 할거는 decoding 해야함
        vector<int> stack;
        for(int i = 0; i < str.length(); i++) {
            stack.push_back(data[str[i]]);
        }
        
        vector<int> res;
        for(int i = 0; i < stack.size(); i += 4) {
            int tmp =  stack[i];
            tmp *= 4;
            int tmp2 = stack[i+1];
            tmp2 /= 16;

            int tmp3 = tmp + tmp2;
            res.push_back(tmp3);


            tmp =  stack[i+1];
            tmp *= 16;
            tmp2 = stack[i+2];
            tmp2 /= 4;

            tmp3 = tmp + tmp2;
            res.push_back(tmp3);


            tmp =  stack[i+2];
            tmp *= 64;
            tmp2 = stack[i+3];

            tmp3 = tmp + tmp2;
            res.push_back(tmp3);

            //000000 00|0000 0000|00 000000
        }
        
        cout << "#" << test_case << " ";
        for(int i = 0; i < res.size(); i++) {
            cout << (char)res[i];
        }
        cout << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}