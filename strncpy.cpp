#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    char src[] = "hi";
    char dest[7] = "abcdef"; // 无空字符
    strncpy(dest, src, 5); // 写入五个字符 'h', 'i', '\0', '\0', '\0' 到 dest
    printf("strncpy(dest, src, 5) to a 6-byte dest gives : ");
    for(size_t n = 0; n < sizeof dest; ++n) {
        char c = dest[n];
        c ? printf("'%c' ", c) : printf("'\\0' ");
    }
 
    printf("\nstrncpy(dest2, src, 2) to a 2-byte dst gives : ");
    char dest2[2];
    strncpy(dest2, src, 2); // 截断：写入二个字符 'h', 'i', 到 dest2
    for (size_t n = 0; n < sizeof dest2; ++n) {
        char c = dest2[n];
        c ? printf("'%c' ", c) : printf("'\\0' ");
    }
    printf("\n");
 
#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    char dst1[6], src1[100] = "hello";
    int r1 = strncpy_s(dst1, 6, src1, 100);      // 写入 0 到 r1 ， 6 个字符到 dst1
    printf("dst1 = \"%s\", r1 = %d\n", dst1,r1); // 'h','e','l','l','o','\0' 到 dst1
 
    char dst2[5], src2[7] = {'g','o','o','d','b','y','e'};
    int r2 = strncpy_s(dst2, 5, src2, 7);        // 复制溢出目标数组
    printf("dst2 = \"%s\", r2 = %d\n", dst2,r2); // 写入非零到 r2 ， '\0' 到 dst2[0]
 
    char dst3[5];
    int r3 = strncpy_s(dst3, 5, src2, 4);        // 写入 0 到 r3 ， 5 个字符到 dst3
    printf("dst3 = \"%s\", r3 = %d\n", dst3,r3); // 'g', 'o', 'o', 'd', '\0' 到 dst3 
#endif
}
