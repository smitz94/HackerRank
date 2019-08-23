// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {

    int n=s.length();
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    return count;
}
