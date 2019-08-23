#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    stack<long> s1,s2;

    int q;
    cin>>q;

    int type;
    long num;
    long temp;
    while(q--)
    {
        cin>>type;
        
        if(type==1)
        {   
            cin>>num;
            s1.push(num);
        }
        else{

         if(s2.empty()){ 
             while (!s1.empty()) 
          {
            temp = s1.top();
            s2.push(temp);
            s1.pop();
          }
         }
         if(!s2.empty()){
          if(type==2)
            s2.pop();
        if(type==3)
            cout<<s2.top()<<endl;
         }

        
        }

    }

    return 0;
}
