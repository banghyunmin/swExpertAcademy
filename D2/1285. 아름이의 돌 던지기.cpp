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
        
        int n;
        cin >> n;
        
        int dist[10001];
        int min = 100001;
        int cnt = 1;
        for(int i = 0; i < n; i++) {
            cin >> dist[i];
            
            // 절댓값 변환
            if(dist[i] < 0) {
                dist[i] *= -1;
            }
            
            // 최솟값 찾기
            if(dist[i] < min) {
                min = dist[i];
                cnt = 1;
            }
            // 최솟값 인원 세기
            else if(dist[i] == min) {
                cnt++;
            }
        }
        
        cout << "#" << test_case << " " << min << " " << cnt << endl;
        
        
            
            
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}