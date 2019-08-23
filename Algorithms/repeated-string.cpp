// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long i,a,b;
    long count=0,r=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            count++;
    }

    a=n%s.size();
    cout<<"a="<<a<<"\n";
    b=n/s.size();
    cout<<"b="<<b<<"\n";

    for(i=0;i<a;i++)
    {
        if(s[i]=='a')
            r++;
    }

    count=(count*b)+r;
    return count;


}
