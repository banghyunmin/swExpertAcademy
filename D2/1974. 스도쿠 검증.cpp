#include<iostream>

using namespace std;

int data[9];
void init() {
    for(int i = 0; i < 9; i++) {
        data[i] = 0;
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{

		/////////////////////////////////////////////////////////////////////////////////////////////
        
        int map[9][9];
        
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                cin >> map[i][j];
            }
        }
        
        int res = 1;
        
        //가로줄
        for(int i = 0; i < 9; i++) {
            init();
            for(int j = 0; j < 9; j++) {
                int tmp = map[i][j];
                if(data[tmp-1] == 0) {
                    data[tmp-1] = 1;
                } else {
                    res = 0;
                }
            }
        }
        
        //세로줄
        for(int i = 0; i < 9; i++) {
            init();
            for(int j = 0; j < 9; j++) {
                int tmp = map[j][i];
                if(data[tmp-1] == 0) {
                    data[tmp-1] = 1;
                } else {
                    res = 0;
                }
            }
        }
        
        //정사각형
        int i_inx[9] = {0, 0, 0, 3, 3, 3, 6, 6, 6};
        int j_inx[9] = {0, 3, 6, 0, 3, 6, 0, 3, 6};
        
        int i_inx2[9] = {0, 0, 0, 1, 1, 1, 2, 2, 2};
        int j_inx2[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
        
        for(int i = 0; i < 9; i++) {
            init();
            for(int j = 0; j < 9; j++) {
                int s_i = i_inx[i] + i_inx2[j];
                int s_j = j_inx[i] + j_inx2[j];
                
                int tmp = map[s_i][s_j];
                if(data[tmp-1] == 0) {
                    data[tmp-1] = 1;
                } else {
                    res = 0;
                }
            }
        }
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}