    vector<int> a(n);
    vector <int> b(n);

    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    //left rotation

    int pos;
    pos = n - d;
    int j = 0;
    for (int i = pos; i < n; i++) {
      b[i] = a[j];
      j++;
    }

    for (int i = 0; i < pos; i++) {
      b[i] = a[j];
      j++;
    }

    for (int i = 0; i < n; i++) {
      cout << b[i] << " ";
    }

    return 0;
}
