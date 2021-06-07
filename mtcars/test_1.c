#include <stdio.h>
int main()
{
    struct contact
    {
        char name[30];
        char address[30];
        char phone[30];
    };

    FILE *f = fopen("practice.bin", "wb");
    struct contact c[3] = {
        {"roy", "wan", "0966"},
        {"sally", "dana", "0918"},
        {"astrid", "cha", "0987"}};
    fwrite(c, sizeof(struct contact), 3, f);
    fclose(f);
}