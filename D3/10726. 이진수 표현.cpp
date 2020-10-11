#include<iostream>
#include <string>

using namespace std;
int bit[8];
void init() {
    for(int i = 0; i < 8; i++) {
        bit[i] = 0;
    }
}

void cvtDtoB(int n){
    int cpy = n;
    for(int i = 0; cpy > 0; i++) {
        bit[i] = cpy%2;
        cpy /= 2;
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
        
        int n, m;
        cin >> n >> m;
        
        cvtDtoB(m);
        
        int res = 0;
        string str[2] = {"ON", "OFF"};
        for(int i = 0; i < n; i++) {
            if(bit[i] == 0) {
                res = 1;
            }
        }
        cout << "#" << test_case << " " << str[res] << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}