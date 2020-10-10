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
        
        string grade[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };
        
        int n, k;
        cin >> n >> k; // n명 학생, k번째 학생
        
        float score[100];
        float cpy[100];
        for(int i = 0; i < n; i++) {
            int a,b,c;
            cin >> a >> b >> c;
            
            score[i] = a*0.35 + b*0.45 + c*0.2;
            cpy[i] = score[i];
        }
        
        for(int i = 0; i < n; i++) {
        	for(int j = i; j < n; j++) {
                if(cpy[i] < cpy[j]) {
                    float tmp = cpy[i];
                    cpy[i] = cpy[j];
                    cpy[j] = tmp;
                }
            }
        }
        
        int res = -1;
        for(int i = 0; i < n; i++) {
            if(score[k-1] == cpy[i]) {
                res = i;
                break;
            }
        }
        
        cout << "#" << test_case << " " << grade[10*res/n] << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}