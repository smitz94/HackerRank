// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
  int ans = numeric_limits<int>::lowest();
  for (int r = 0; r < arr.size() - 2; r++) {
    for (int c = 0; c < arr[r].size() - 2; c++) {
      constexpr int offsets[7][2] = {{0, 0}, {0, 1}, {0, 2}, {1, 1},
                                     {2, 0}, {2, 1}, {2, 2}};
      int hourglass = 0;
      for (auto [dr, dc] : offsets) {
        hourglass += arr[r + dr][c + dc];
      }
      ans = max(ans, hourglass);
    }
  }
  return ans;
}
