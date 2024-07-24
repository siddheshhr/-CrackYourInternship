class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
       
        int k=0;
        for(int i =m;k<n;i++){
            n1[i]=n2[k];
            k++;
        }
        
        sort(n1.begin(),n1.end());
        
    }
};
