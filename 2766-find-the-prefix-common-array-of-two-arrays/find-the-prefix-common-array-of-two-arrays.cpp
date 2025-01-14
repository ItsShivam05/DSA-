class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>ans(n,0);
        for(int i = 0;i<A.size();i++)
        {
            int count = 0;
            for(int Ai = 0;Ai<=i;Ai++)
            {
                for(int Aj = 0;Aj<=i;Aj++)
                {
                    if(A[Ai] == B[Aj])
                    count++;
                }
            }
            ans[i] = count;
        }

        return ans;

    }
};