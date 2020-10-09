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
        
        // 입력
        char str[11];
        for(int i = 0; i < 8; i++) {
            cin >> str[i];
        }
        
        // 월 별 최대 일수
        int limit[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        // 달수와 일수 추출
        int month = (str[4] - '0') * 10 + (str[5] - '0');
        int day = (str[6] - '0') * 10 + (str[7] - '0');
        
        // 문자열 재조합
        char res[20];
        int inx = 0;
        for(int i = 0; i < 8; i++) {
            if(i == 4 || i == 6) {
                res[inx++] = '/';
            }
            res[inx++] = str[i];
        }
        res[inx] = '\0';
        
        // 조건 판단 및 출력
        if(day <= limit[month-1] && month && day) {
            cout << "#" << test_case << " " << res << endl;
        } else {
            cout << "#" << test_case << " -1" << endl;
        }
        
		/////////////////////////////////////////////////////////////////////////////////////////////

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}