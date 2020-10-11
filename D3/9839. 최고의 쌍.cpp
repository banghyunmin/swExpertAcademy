#include<iostream>

using namespace std;

// n개의 양의 정수
// 두개의 쌍을 골라 곱한다. (완전탐색)
// 곱한 값이 오름차순인지 확인
// 이 중 가장 큰값

int chk(int n)  { // 오름차순인지 확인( 오름차순이면 1반환 )
    int cpy = n;
    int comp = n%10 + 1;
    int tmp = 0;
    for(int i; cpy > 0; i++) {
        tmp = cpy % 10;
        
        if(tmp != comp-1) {
            return 0;
        }
        
        comp = tmp;
        cpy /= 10;
    }
    
    return 1;
}

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
        int data[1000];
        for(int i = 0; i < n; i++) {
            cin >> data[i];
        }
        
        int res = -1;
        for(int i = 0; i < n; i++) {
        	for(int j = i; j < n; j++) {
                if(i == j) continue;
                
                // 오름차순이고
                if( chk(data[i] * data[j]) == 1) {
                    // 더 큰값이면
                    if(res < data[i] * data[j]) {
                        // 저장
                        res = data[i] * data[j];
                    }
                }
            }
        }
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}