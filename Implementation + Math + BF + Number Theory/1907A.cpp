#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
	cin >> t;

   vector<string> positions(t);
    for(int i = 0; i < t; i++) {
        cin >> positions[i];
    }
    for(const auto& position : positions) {
        char x = position[0];
        char y = position[1];
        
        for(char i = '1'; i <= '8'; i++){
        	if(i != y){
        		cout << x << i << endl;
			}
		}
		for(char i = 'a'; i <= 'h'; i++){
        	if(i != x){
        		cout << i << y << endl;
			}
		}
    }
    return 0;
}

