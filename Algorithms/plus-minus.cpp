// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    int n=arr.size();
    double count,count1,count2;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            count++;
        }
        if(arr[i]>0)
        {
            count1++;
        }
    }
    count2=n-count1-count;
    cout<<fixed<<setprecision(6);
    cout<<count1/n<<"\n"<<count/n<<"\n"<<count2/n;
}
