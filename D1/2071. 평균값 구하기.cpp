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
        double res = 0.0;
         
        for(int i = 0; i < 10; i++) {
            cin >> tmp;
            res += tmp;
        }
         
        res /= 10;
        cout<<fixed;
        cout.precision(0);
        cout << "#" << test_case << " " << res << endl;
         
        /////////////////////////////////////////////////////////////////////////////////////////////
 
 
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}