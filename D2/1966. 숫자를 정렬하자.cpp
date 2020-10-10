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
        int data[50];
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> data[i];
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(data[i] > data[j]) {
                    int tmp = data[i];
                    data[i] = data[j];
                    data[j] = tmp;
                }
            }
        }
        
        cout << "#" << test_case << " ";
        
        for(int i = 0; i < n; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}