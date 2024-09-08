// time : o(log N)
// space : O (1)
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0; 
        int h = arr.size()-k;

        while(l<h)
        {
            int mid = l + (h-l)/2; 

            int d_mid = (x-arr[mid]); 
            int d_high = (arr[mid+k] - x); 

            if(d_mid <= d_high)
            {
                h = mid;
            }
            else
            {
                l = mid+1;
            }
        }

        cout << l << "\n";
        vector<int> result;
        for(int i = l ; i < l+k; i++)
        {
            cout << i << "\n";

            result.push_back(arr[i]);
        }

        return result;
    }
};