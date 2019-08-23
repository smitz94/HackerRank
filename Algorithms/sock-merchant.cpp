// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
    int freq[101] = {},k;
    for(int i = 0; i < n; i++) {
        k=ar[i];
        freq[k]++;
    }

    int res = 0;
    for(int i = 0; i <= 100; i++){
         res += freq[i] / 2;
     }

    return res;
}
