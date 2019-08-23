// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a) {

    string result;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]<=0)
            count++;

    }
    //cout<<count<<endl;
    if(count>=k)
        result="NO";
    else
        result="YES";

    return result;


}
