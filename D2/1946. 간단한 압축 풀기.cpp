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
        
        char alp[20];
        int zip[20];
        zip[0] = 0;
        for(int i = 0; i < n; i++) {
            cin >> alp[i] >> zip[i+1];
            zip[i+1] += zip[i];
        }
        
        int index = 0;
        cout << "#" << test_case << endl;
        while(index < zip[n]) {
            for(int i = 0; i < 10; i++) {
                for(int j = 0; j < n; j++) {
                    if(zip[j] <= index && index < zip[j+1]) {
                        cout << alp[j];
                        index++;
                        break;
                    }
                }
            }
            cout << endl;
        }
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}