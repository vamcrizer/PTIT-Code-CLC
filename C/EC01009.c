//Bài làm đã được tham khảo nguồn khác

#include <stdio.h>
#include <math.h>

long long ktcp(long long a) {
    long long b = sqrt(a);
    if (b * b == a) return b;
    b++;
    if (b * b == a) return b;
    return 0;
}

int main() {


    long long a, b, c, d, e, f, x, y;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
    /*  a b
        c d
        e f
    */
    x = a * b + c * d + f * e;
    y = ktcp(x);
    if (y == 0) {
        printf("NO");
    } else {
        if (a > b) {
            long long temp = a;
            a = b;
            b = temp;
        }
        if (c > d) {
            long long temp = c;
            c = d;
            d = temp;
        }
        if (e > f) {
            long long temp = e;
            e = f;
            f = temp;
        }
        if (b == d && d == f && f == y) {
            printf("%lld\n", y);
        } else {
            if (d == y) {
                long long temp = a;
                a = c;
                c = temp;
                temp = b;
                b = d;
                d = temp;
            }
            if (f == y) {
                long long temp = a;
                a = e;
                e = temp;
                temp = b;
                b = f;
                f = temp;
            }
            if (b == y) {
                a = y - a;
                if ((c == a && e == a) || (d == a && e == a) || (c == a && f == a) || (d == a && f == a)) {
                    printf("YES");
                } else {
                    printf("NO");
                }
            } else {
                printf("NO");
            }
        }
    }
    return 0;
}
