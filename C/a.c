#include<stdio.h>
#include<string.h>

char tt[4][2][5] = {{"1", "3"}, {" ", "2"}, {" ", " "}, {"2", " "}};
int flag=0, l;

void rec(char str[], int cst, int i) {
    int id=0;
    for(; id<strlen(tt[cst][str[i]-'a']) && i<l; id++)
        rec(str, tt[cst][str[i]-'a'][id]-'0', i+1);
    if(i==l && cst==2) {
        printf("Accepted\n");
        flag=1;
    }
}

int main() {
    char s[5];
    printf("Enter the binary string: ");
    scanf("%s", &s);
    l=strlen(s);
    rec(s, 0, 0);
    if(flag==0)
        printf("Rejected\n");
    return 0;
}