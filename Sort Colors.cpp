class Solution {
public:
      void merge(vector<int>& nums, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;
        
        vector<int> left(n1);
        vector<int> right(n2);
        for (int i = 0; i < n1; ++i) {
            left[i] = nums[l + i];
        }
        for (int i = 0; i < n2; ++i) {
            right[i] = nums[mid + 1 + i];
        }
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                nums[k] = left[i];
                ++i;
            } else {
                nums[k] = right[j];
                ++j;
            }
            ++k;
        }
        while (i < n1) {
            nums[k] = left[i];
            ++i;
            ++k;
        }
        while (j < n2) {
            nums[k] = right[j];
            ++j;
            ++k;
        }
    }
    void mergeSort(vector<int>& a, int i, int n){
        if(i>=n)return;
        int mid=(i+n)/2;
        mergeSort(a,i,mid);
        mergeSort(a,mid+1,n);
        merge(a,i,mid,n);
    }
    void sortColors(vector<int>& nums) {
        int id=0,l=0,r=nums.size()-1;
        while(id<=r){
            if(nums[id]==0){
                swap(nums[id],nums[l]);
                l++;
                id++;
            }
            else if(nums[id]==2){
                swap(nums[id],nums[r]);
                r--;
               // id++;
            }else{
                id++;
            }
        }
    }
};
