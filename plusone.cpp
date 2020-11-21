#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        while(1) {
            if(i>= 0 && digits[i]==9) {
                digits[i] = 0;
                i--;
            } else {
                if(i>=0){
                    digits[i]++;
                    break;   
                } else {
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
        }
        for(int j=0; j<digits.size(); j++){
            cout<<"number: "<<j<<" is: "<<digits[j]<<endl;
        }
        return digits;
    }
int main() {
    vector<int> arr = {9, 9};
    plusOne(arr);
}
    

