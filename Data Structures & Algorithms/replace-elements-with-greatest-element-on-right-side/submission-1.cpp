class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greastestRight = -1;
        int aux = 0;

        if (arr.size() == 1) {
            arr[0] = -1;
            return arr;
        }
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            aux = arr[i];
            arr[i] = greastestRight;
            greastestRight = max(greastestRight,aux);            

        }

        return arr;
    }
};