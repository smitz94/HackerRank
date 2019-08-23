vector<int> dynamicArray(int n, vector<vector<int>> queries) {
  vector<vector<int>> seqList(n);
  vector<int> list;

  int lastAnswer = 0;
  for (int i = 0; i < queries.size(); ++i) {
    int query = queries[i][0];
    int x = queries[i][1];
    int y = queries[i][2];
    int seqIndex = (x ^ lastAnswer) % n;
    if (query == 1) {
      seqList[seqIndex].push_back(y);
    } else if (query == 2) {
      int indexAns = y % seqList[seqIndex].size();
      lastAnswer = seqList[seqIndex][indexAns];
      list.push_back(lastAnswer);
    }
  }
  return list;
}
