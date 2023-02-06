#include<stdio.h>
#include<string.h>

void Q1(char s[]) {
    int cs = 0;
    for(int i=0; i<strlen(s); i++) {
        if(cs==0 && s[i]=='b')
            cs=0;
        else if(cs==0 && s[i]=='a' || cs==1 && s[i]=='b')
            cs=1;
        else if(cs==1 && s[i]=='a' || cs==2 && (s[i]=='a' || s[i]=='b'))
            cs = 2;
        printf("%d-->",cs);
    }
    if(cs==1)
        printf("Accepted\n");
    else
        printf("Rejected\n");
}

void Q2(char s[]) {
    int cs = 0;
    for(int i=0; i<strlen(s); i++) {
        if(cs==0 && s[i]=='b')
            cs=0;
        else if(cs==0 && s[i]=='a' || cs==1 && (s[i]=='a' || s[i]=='b'))
            cs=1;
        printf("%d-->",cs);
    }
    if(cs==1)
        printf("Accepted\n");
    else
        printf("Rejected\n");
}

void Q3(char s[]) {
    int cs = 0;
    for(int i=0; i<strlen(s); i++) {
        if(cs==0 && s[i]=='b')
            cs=1;
        else if(cs==0 && s[i]=='a' || cs==3 && s[i]=='a')
            cs=3;
        else if(cs==3 && s[i]=='b' || cs==4 && s[i]=='a' || cs==1 && s[i]=='a')
            cs=4;
        else if(cs==1 && s[i]=='b')
            cs=2;
        else if(cs==4 && s[i]=='b' || cs==2 && s[i]=='a' || cs==5 && s[i]=='a')
            cs=5;
        else if(cs==2 && s[i]=='b' || cs==5 && s[i]=='b' || cs==6 && (s[i]=='a' || s[i]=='b'))
            cs=6;
        printf("%d-->",cs);
    }
    if(cs==5)
        printf("Accepted\n");
    else
        printf("Rejected\n");
}

void Q4(char s[]) {
    int cs = 0;
    for(int i=0; i<strlen(s); i++) {
        if(cs==0 && s[i]=='b')
            cs=0;
        else if(cs==0 && s[i]=='a' || cs==1 && s[i]=='a')
            cs=1;
        else if(cs==2 && (s[i]=='a' || s[i]=='b') || cs==1 && s[i]=='b')
            cs = 2;
        printf("%d-->",cs);
    }
    if(cs==2)
        printf("Accepted\n");
    else
        printf("Rejected\n");
}

int main() {
    char s[10];
    int n;
    printf("1. Question 1\n2. Question 2\n3. Question 3\n4. Question 4\n5. Exit\n");
    while(1){
        printf("Enter your choice: ");
        scanf("%d", &n);
        if(n == 5) 
            break;
        printf("Enter the binary string: ");
        scanf("%s", &s);
        switch(n) {
            case 1:
                Q1(s);
                break;
            case 2:
                Q2(s);
                break;
            case 3:
                Q3(s);
                break;
            case 4:
                Q4(s);
        }
    }
    return 0;
}