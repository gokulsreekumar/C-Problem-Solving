#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> inter={};
        int i=0, j=0; 
        if(n1==0 || n2==0) {
            return inter;
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1[0]==nums2[0]) {
            inter.push_back(nums1[0]);
            i++; j++;
        } else {
            if(nums1[0]<nums2[0])
                i++;
            else
                j++;
        }
        while(i<n1 && j<n2) {
            if(i&&j) {
                if(nums1[i-1]==nums1[i]) {
                    i++;
                } else if(nums2[j-1]==nums2[j]) {
                    j++;   
                }
            } 
            if(i==n1) {
                break;
            } 
            if(j==n2) {
                break;
            }
            if(nums1[i]<nums2[j]) {
                i++;
            } else if(nums1[i]>nums2[j]) {
                j++;
            } else if(nums1[i]==nums2[j]) {
                if(inter.size()>0 && inter[inter.size()-1]!=nums1[i]){
                    inter.push_back(nums1[i]);   
                } else if(inter.size()==0){
                    inter.push_back(nums1[i]); 
                }
                i++;j++;
            }
        }
        return inter;
    }
};