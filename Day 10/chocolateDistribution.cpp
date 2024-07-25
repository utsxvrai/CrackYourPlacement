 public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        long long res=INT_MAX;
        sort(a.begin(), a.end());
        long long i = 0;
        long long j = m;
        while(i < n && j < n){
            res = min(res,a[j] - a[i]);
            i++;
            j++;
            cout<<res<<endl;
        }
        return res;
    //code
    
    }   