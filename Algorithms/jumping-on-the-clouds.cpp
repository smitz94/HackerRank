// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c,int n) 
{

  int currPos = 0;
  int lastCloudPos = c.size() - 1;

  int jumps = 1;

  while (currPos < lastCloudPos - 2) {
    if (c.at(currPos + 2) == 0)
      currPos += 2;
    else
      currPos++;
    jumps++;
  }

  return jumps;
}
