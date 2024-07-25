#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int mod = 1000000007;
#define max_n 1001
#define MAX 1000001
#define Quick() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*created by: HiuDev*/


int main(){
    Quick();
    int t;
    cin >> t;
    deque<int> dq;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSHFRONT"){
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(!dq.empty()){
                cout << dq.front() << endl;
            }
            else cout << "NONE" << endl;
        }
        else if(s == "POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
            else continue;
        }
        else if(s == "PUSHBACK"){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "PRINTBACK"){
            if(!dq.empty()){
                cout << dq.back() << endl;
            }
            else cout << "NONE" << endl;
        }
        else if(s == "POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
            else continue;
        }
    }
    return 0;
}