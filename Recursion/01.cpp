int multiply(int m, int n) {
    if (n == 1) 
        return m;
    else 
        return m + multiply(m, n - 1);
}
