#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
char tree[27][3];
int n;
void front(int i, int j)
{
    printf("%c",tree[i][j]);
    int k = i;
    int l = 0, r = 0;
    while(k < n)
    {
        if(tree[k][0] == tree[i][1])
            l = k;
        if(tree[k][0] == tree[i][2])
            r = k;
        k++;
    }
    if(l != 0)
        front(l, 0);
    if(r != 0)
        front(r, 0);
}
void middle(int i, int j)
{
    int k = i;
    int l = 0, r = 0;
    while(k < n)
    {
        if(tree[k][0] == tree[i][1])
            l = k;
        if(tree[k][0] == tree[i][2])
            r = k;
        k++;
    }
    if(l != 0)
        middle(l, 0);
    printf("%c", tree[i][j]);
    if(r != 0)
        middle(r, 0);
}
void back(int i, int j)
{
    int k = i;
    int l = 0, r = 0;
    while(k < n)
    {
        if(tree[k][0] == tree[i][1])
            l = k;
        if(tree[k][0] == tree[i][2])
            r = k;
        k++;
    }
    if(l != 0)
        back(l, 0);
    if(r != 0)
        back(r, 0);
    printf("%c",tree[i][j]);
}
int main() 
{
    scanf("%d",&n);
    getchar();  //입력받을 때 한줄 띄기 기능
    int i = 0; //while 문시, i를 0으로 선언해주어서 하나씩 증가하는 형태를 만들어준다.
    while(i < n) //0 < 7 
    {
        scanf("%c %c %c", &tree[i][0], &tree[i][1], &tree[i][2]);
        getchar();
        i++;
    }
    front(0, 0);
    printf("\n");
    middle(0, 0);
    printf("\n");
    back(0, 0);
    return 0;
}