int solution (vector<int> &A) {
    unsigned long N = A.size() + 1;
    unsigned long total = (N * (N + 1)) / 2;
    unsigned long sum = 0;
    for (std::size_t i=0; i < A.size(); i++ )
        sum += A[i];
    unsigned long res = total - sum;
    return (int) res;
}
