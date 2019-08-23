// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr,int n) {
            int i,j=n-1,ltr=0,rtr=0,diff;
            for(i=0;i<n;i++)
            {
                ltr=ltr+arr[i][i];
                rtr=rtr+arr[i][j];
                j--;
            }
            diff=abs(ltr-rtr);
            return diff;


}
