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
        
        int a_s;
        int b_b, b_r, b_s;
        int w;
        
        cin >> a_s >> b_b >> b_r >> b_s >> w;
        
        // a회사 요금
        int a_price = a_s * w;
        // b회사 요금
        int b_price;
        if(w <= b_r) {
            b_price = b_b;
        } else {
            b_price = b_s * (w - b_r) + b_b;
        }
         
        int res;
        if(a_price < b_price) res = a_price;
        else res = b_price;
        
        cout << "#" << test_case << " " << res << endl;
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}