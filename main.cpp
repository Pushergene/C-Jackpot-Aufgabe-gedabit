#include <iostream>
#include <vector>
using namespace std;
void testJackpot(vector<string> &result) {
	for(int i=1;i<result.size();i++) {
    if(result[i]!=result[0])
        cout << "Falsch";
    else
        cout << "Richtig";
    break;
}
}
int main()
{    
    vector<string> arr = {"Hallo", "Hallo"};
    testJackpot(arr);
}
