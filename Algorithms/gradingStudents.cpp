 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) {
    /*
     * Write your code here.
     */
     int n=grades.size();
     int i,diff;
     for(i=0;i<n;i++)
     {
         if(grades[i]>=38)
         {
             diff=grades[i]%5;
             if(5-diff<3)
             {
                 grades[i]=grades[i]+(5-diff);
             }

         }
     }

     return grades;

}
