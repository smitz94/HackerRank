// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
int dis_a,dis_b;
string s;
dis_a=abs(z-x);
dis_b=abs(z-y);
if(dis_a<dis_b)
{
    s="Cat A";
    
}
if(dis_a>dis_b)
{   
    s="Cat B";
}

if(dis_a==dis_b)
{
    s="Mouse C";
}
return s;
}
