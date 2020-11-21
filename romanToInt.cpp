#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    unordered_map<char, int> SymbolTable;
    int romanToInt(string s) {
        SymbolTable['I'] = 1;
        SymbolTable['V'] = 5;
        SymbolTable['X'] = 10;
        SymbolTable['L'] = 50;
        SymbolTable['C'] = 100;
        SymbolTable['D'] = 500;
        SymbolTable['M'] = 1000;
        int num=0; int n=s.length();
        for (int i=0; i<n; i++) {
            int curr = SymbolTable.at(s[i]);
		    if(i==n-1) {
                num+=curr;
            } else if(curr>=SymbolTable.at(s[i+1])) {
                num+=curr;
            } else {
                num+=SymbolTable.at(s[i+1])-curr;
                i++;
            }
	    }
        return num;
    }
};