// Complete the countingValleys function below.
int countingValleys(int n, string s) {
        int i,valley=0,sea_level=0;
        for(i=0;i<n;i++)
        {
            
            if(sea_level==0 && s[i]=='D')
            {
                valley++;
            }
            if (s[i] == 'D') {
              sea_level--;
            } else {
              sea_level++;
            }
        }
        return valley;

}
