#include<iostream>
#include<string>

using namespace std;

int chkMonth(int n) {
    if(0 < n && n <= 12) {
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
        
        string date;
        cin >> date;
        
        int src1, src2;
        src1 = (date[0]-'0') * 10 + (date[1]-'0');
        src2 = (date[2]-'0') * 10 + (date[3]-'0');
        
        string str[4] = {"AMBIGUOUS", "MMYY", "YYMM", "NA"};
        int res;
        if(chkMonth(src1) == 0 && chkMonth(src2) == 0 ) {
            res = 3;
        }
        else if(chkMonth(src1) == 1 && chkMonth(src2) == 0 ) {
            res = 1;
        }
        else if(chkMonth(src1) == 0 && chkMonth(src2) == 1 ) {
            res = 2;
        }
        else if(chkMonth(src1) == 1 && chkMonth(src2) == 1 ) {
            res = 0;
        }
            
        cout << "#" << test_case << " " << str[res] << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}