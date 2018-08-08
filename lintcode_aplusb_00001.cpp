// 异或 是不进位加法
// & << 1 得到进位
int aplusb(int a, int b) {
    while (b != 0) {
        int c = a ^ b;
        int d = (a & b) << 1;
        a = c;
        b = d;
    }
    return a;
}

