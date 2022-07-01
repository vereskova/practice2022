#include <stdio.h>
#include <math.h>

int function(int k, int i, int N, double p) {
    int j = 0;
    for (k = 1; k <= N; k++)
        for (i = 1; i < pow(k, 1.0 / 3); i++)
        {
            j = k - i * i * i;
            p = pow(j, 1.0 / 3);

            if (fabs(p - (int)p) < 1e-5)
            {
                printf("%li = %li^3 + %.0lf^3 \n", k, i, p);

                break;
            }
            return k;
        }

}