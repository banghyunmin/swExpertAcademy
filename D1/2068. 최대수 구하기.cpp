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
         
        int tmp;
        int res = 0;
         
        for(int i = 0; i < 10; i++) {
            cin >> tmp;
            if(res < tmp) res = tmp;
        }
         
        cout << "#" << test_case << " " << res << endl;
         
        /////////////////////////////////////////////////////////////////////////////////////////////
 
 
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}