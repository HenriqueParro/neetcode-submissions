class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greastestRight = -1;
        int aux = 0;
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            aux = arr[i];
            arr[i] = greastestRight;
            greastestRight = max(greastestRight,aux);            

        }

        return arr;
    }
};