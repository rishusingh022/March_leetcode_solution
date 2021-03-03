#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ::iterator ip;
        vector<int> v=nums;
        sort(v.begin(),v.end());
        int min=*min_element(v.begin(),v.end());
        int max=*max_element(v.begin(),v.end());
        vector<int> actual;
        for(int i=min;i<=max+1;i++){
            actual.push_back(i);
        }
        vector<int> result;
        for(int i=0;i<actual.size();i++){
            if(actual[i]!=v[i]){
                result.push_back(v[i]);
                result.push_back(actual[i]);
                
            }
        }
        return result;
    }
};
int main(){
    Solution s;
    vector<int> temp={1,2,2,4};
    vector<int> result=s.findErrorNums(temp);
    cout<<result[1];
}