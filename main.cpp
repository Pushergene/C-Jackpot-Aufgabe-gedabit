#include <iostream>
#include <vector>
using namespace std;
void testJackpot(vector<string> &result) {
	for(int i=0;i<result.size();i++) {
    if(result[i]!=result[0])
        cout << "Falsch";
    else
        cout << "richtig";
}
}
int main()
{    
    vector<string> arr;
    cin >> arr;
    testJackpot(arr);
}
