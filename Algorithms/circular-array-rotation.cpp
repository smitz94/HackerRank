// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int n=a.size();
    vector<int> b(n);
    
    int num_rot=k%n;
    int pos1=num_rot;

    cout<<pos1<<endl;
    int j=0;
    for(int i=pos1;i<n;i++)
    {
        b[i]=a[j];
        cout<<j<<endl;
        j++;
    }
    
    for(int i=0;i<pos1;i++)
    {
        b[i]=a[j];
        j++;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

    int n1=queries.size();
    vector<int> c(n1);

    for(int i=0;i<n1;i++)
    {
        c[i]=b[queries[i]];
    }

    return c;

}
