#include<iostream>

using namespace std;
int data[11][11] = {0, };

void init() {
    for(int i = 0; i < 11; i++) {
        for(int j = 0; j < 11; j++) {
            data[i][j] = 0;
        }
    }
}

void fill_outside(int n, int st, int x, int y) {
    int val = st;
    
    for(int i = x; i < n + x; i++) {
        data[y][i] = val++;
    }
    
    for(int i = y+1; i < n + y; i++) {
        data[i][x+n-1] = val++;
    }
    
    for(int i = x + n - 2; i >= x; i--) {
        data[y+n-1][i] = val++;
    }
    
    for(int i = y + n - 2; i > y; i--) {
        data[i][x] = val++;
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
        init();
        
        int n;
        cin >> n;
        
        int cpy = n;
        int val = 1;
        for(int i = 0; cpy > 0; i++) {
            fill_outside(cpy, val, i, i);
            val += (cpy-1)*4;
            cpy -= 2;
        }
        //fill_outside(n, 1, 0, 0); // test
        //fill_outside(n-2, 13, 1, 1); // test
        
        cout << "#" << test_case << endl;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}