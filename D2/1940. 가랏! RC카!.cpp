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
        
        int speed = 0;
        int dist = 0;
        for(int i = 0; i < n; i++) {
            int command;
            cin >> command;
            int val;
            if(command > 0) {
                cin >> val;
            }
            
            if(command == 1) {
                speed += val;
            } else if(command == 2) {
                speed -= val;
                if(speed < 0) speed = 0;
            }
            
            dist += speed;
        }
        
        cout << "#" << test_case << " " << dist << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}