#include<stdio.h>

struct Card
{
//    int face;
//    int shape;
//    int color;
       char face[10];
       char shape[15];
       char color[20];
};

int main()
{
    struct Card c[52]={{"A", "Dimond", "black"},{"1", "club" ,"red"}};
    printf("%s\n", c[0].face);
    printf("%s\n", c[0].color);
    printf("%s\n", c[0].shape);
}
