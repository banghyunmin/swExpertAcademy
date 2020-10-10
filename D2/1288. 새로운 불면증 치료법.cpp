#include<iostream>

using namespace std;
int data[10];

void init() {
    for(int i = 0; i < 10; i++) {
        data[i] = 0;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////

void divide(int n) {
    int cpy = n;
    for(int i = 0; cpy > 0; i++) {
        data[cpy%10] = 1;
        cpy /= 10;
    }
}

int ifEnd() {
    for(int i = 0; i < 10; i++) {
        if(data[i] == 0) {
            return 0;
        }
    }
    return 1;
}

/////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char** argv)
{
	int test_case;
	int T;
    
	cin>>T;
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        init();

		/////////////////////////////////////////////////////////////////////////////////////////////
        
        int n;
        cin >> n;
        
        int cpy = n;
        int res;
        for(int i = 0; ifEnd() == 0; i++) {
            divide(cpy);
            res = cpy;
            cpy += n;
            
            //cout << cnt << " : ";
            //for(int j = 0; j < 10; j++) {
            //    cout << data[j] << " ";
            ///}
            //cout << endl;
        }
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}