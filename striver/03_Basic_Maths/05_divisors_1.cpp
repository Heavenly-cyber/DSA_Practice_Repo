class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> vec;
        for(int i=1; i*i<=n; i++){  //O(sqrt(n))
            if (n%i == 0) {
                vec.push_back(i);
                if(n/i != i) vec.push_back(n/i);
            }
        }

        sort(vec.begin(),vec.end()); //O(number of factors log (no.of factors))
        return vec;
    }
};
