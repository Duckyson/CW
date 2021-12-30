#include<stdio.h>
#include<string.h>
int main(void) {
    int n = 0;
    scanf("%d", &n);
    getchar(); 
    char a[100][100];
    for (int i = 0; i < n; i++) {
        char ch;
        ch = getchar();
        int k = 0;
        while (ch != '\n') {
            a[i][k++] = ch;
            ch = getchar();
        }
        a[i][k] = '\0';
        continue;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            char duty[100];
            if (strcmp(a[j], a[i]) < 0) {
                strcpy(duty, a[j]);//duty=a[j];
                strcpy(a[j], a[i]);//a[j]=a[i];
                strcpy(a[i], duty);//a[i]=duty;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%s\n", a[i]);
    return 0;
}
