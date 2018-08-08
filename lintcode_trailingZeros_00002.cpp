//
// Created by Administrator on 2018/8/8.
// 统计所有的5的个数
long long trailingZeros(long long n) {
    long long count = 0;
    while (n != 0) {
        n = n / 5;
        count += n;
    }
    return count ;
}
