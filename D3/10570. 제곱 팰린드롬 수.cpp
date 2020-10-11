#include<iostream>

using namespace std;
// 팰린드롬 검사
int chkPr(int n) {
    int cpy = n;
    int data[5];
    int len;
    for(int i = 0; cpy > 0; i++) {
        data[i] = cpy%10;
        cpy /= 10;
        len = i + 1;
    }
    
    int flag = 0;
    for(int i = 0; i < len; i++) {
        if(data[i] != data[len - 1- i]) {
            return 0;
        }
    }
    return 1;
}

// 제곱근찾기
int sqrt(int n) {
    for(int i = 1; i < 34; i++) {
        if(i*i == n) {
            return i;
        }
    }
    return 123456;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
        
        int a, b;
        cin >> a >> b;
        
        int cnt = 0;
        for(int i = a; i <= b; i++) {
            if( chkPr(i) && chkPr(sqrt(i)) ) {
                cnt++;
            }
        }
        
        cout << "#" << test_case << " " << cnt << endl;
        //int tmp = 9;
        //cout << chkPr(tmp) << chkPr(sqrt(tmp));
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}