// Complete the happyLadybugs function below.
string happyLadybugs(string b) {
    int n=b.length();
    string c="YES";

    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(b[i]=='_')
        {
            count++;
        }
    }
    if(count==0)
    {
        for(i=0;i<n;i++)
        {
            if(b[i]!=b[i+1])
            {
                if(b[i]!=b[i-1])
                {
                    c="NO";
                }
            }
        }
    }
    else{
        sort(b.begin(),b.end());
        for(i=0;i<n-count;i++)
        {
          if (b[i] != b[i + 1]) {
            if (b[i] != b[i - 1]) {
              c = "NO";
            }
          }
        }
    }

    return c;

}
