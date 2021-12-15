#include <stdio.h>
int main(void) {
    char a_0[7][6] = { "*****","*   *","*   *","*   *","*   *",
        "*   *","*****" };
    char a_1[7][6] = { "    *","    *","    *","    *","    *",
        "    *","    *" };
    char a_2[7][6] = { "*****","    *","    *",
        "*****","*    ","*    ","*****" };
    char a_3[7][6] = { "*****","    *","    *",
        "    *","    *" ,"*****" };
    char a_4[7][6] = { "*   *","*   *","*   *","*****","    *",
        "    *","    *" };
    char a_5[7][6] = { "*****","*    ","*    ","*****",
        "    *","    *","*****" };
    char a_6[7][6] = { "*****","*    ","*    ","*****","*   *",
        "*   *","*****" };
    char a_7[7][6] = { "*****","    *","    *","    *","    *",
        "    *","    *" };
    char a_8[7][6] = { "*****","*   *","*   *","*****","*   *",
        "*   *","*****" };
    char a_9[7][6] = { "*****","*   *","*   *","*****","    *",
        "    *","*****" };

    int n = 0,f=0;
    scanf_s("%d", &n);
    for (; n > 0; n--) {
        int d = 0;
        scanf_s("%d", &d);
        int d_1 = d, c = 0;
        int order[5] = { 0 };
        while (d_1 > 9) {
            order[c] = d_1 % 10;
            d_1 = (d_1 - order[c]) / 10;
            c++;
        }order[c] = d_1;f=c;

       // for (int i = 0; i < c; i++) printf("%d\n", order[c]);
        printf("%d:\n", d);
        for (int m = 0; m < 7; m++) {
            for (c=f; c > -1; c--) {
                switch (order[c]) {
                case 0:printf("%s  ", a_0[m]); break;
                case 1:printf("%s  ", a_1[m]); break;
                case 2:printf("%s  ", a_2[m]); break;
                case 3:printf("%s  ", a_3[m]); break;
                case 4:printf("%s  ", a_4[m]); break;
                case 5:printf("%s  ", a_5[m]); break;
                case 6:printf("%s  ", a_6[m]); break;
                case 7:printf("%s  ", a_7[m]); break;
                case 8:printf("%s  ", a_8[m]); break;
                case 9:printf("%s  ", a_9[m]); break;
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}