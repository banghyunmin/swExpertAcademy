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
        
        int n,k;
        cin >> n >> k; // nxn배열 k길이의 단어
        
        int map[16][16] = {0, };
        for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) {
                cin >> map[i][j];
            }
        }
        
        int dir_i[2] = {1, 0};
        int dir_j[2] = {0, 1};
        int dir; // 0:세로, 1:가로
        int cnt = 0;
        
        for(int i = 0; i < n; i++) {
	        for(int j = 0; j < n; j++) {
                if(map[i][j] == 1) {
                    // 세로방향
                    if(i == 0 || map[i - 1][j] == 0) {
                        dir = 0;
                        
                        int s_cnt = 0;
                        int s_i = i;
                        int s_j = j;
                        for(int a = 0; map[s_i][s_j] == 1 ; a++) {
                            s_cnt++;
                            s_i += dir_i[dir];
                            s_j += dir_j[dir];
                        }
	                    if(s_cnt == k) cnt++;
                    }
                    
                    
                    
                    // 가로방향
                    if(j == 0 || map[i][j-1] == 0) {
                        dir = 1;
                        
                        int s_cnt = 0;
                        int s_i = i;
                        int s_j = j;
                        for(int a = 0; map[s_i][s_j] == 1 ; a++) {
                            s_cnt++;
                            s_i += dir_i[dir];
                            s_j += dir_j[dir];
                        }

                        if(s_cnt == k) cnt++;
                    }
                    
                    
                }
            }
        }
        
        cout << "#" << test_case << " " << cnt << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}