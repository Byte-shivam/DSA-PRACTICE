class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int count=1;
        int n=sizeof(arr);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(arr[i]==arr[j+1]){
                    count++;
                }
            }
            arr[i]=count;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        if(ans!=0){
            return true;
        }else
        return false;
    }
};  