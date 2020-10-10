#include<iostream>

using namespace std;


int data[10][10];
int temp90[10][10];
int temp180[10][10];
int temp270[10][10];

void rotate(int arr[10][10], int arr_src[10][10], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[j][n-1-i] = arr_src[i][j];
        }
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
        
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
        	for(int j = 0; j < n; j++) {
                cin >> data[i][j];
            }
        }
        
        rotate(temp90, data, n);
        rotate(temp180, temp90, n);
        rotate(temp270, temp180, n);
        
        cout << "#" << test_case << endl;
        for(int i = 0; i < n; i++) {
        	for(int j = 0; j < n; j++) {
                cout << temp90[i][j];
            }
            cout << " ";
        	for(int j = 0; j < n; j++) {
                cout << temp180[i][j];
            }
            cout << " ";
        	for(int j = 0; j < n; j++) {
                cout << temp270[i][j];
            }
            cout << endl;;
        }
        
		/////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}