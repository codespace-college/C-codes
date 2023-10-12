#include <stdio.h> 
#include <string.h> 

struct coordinate{
    int x,y;
};

int main(){
    struct coordinate point1,point2;

    printf("Enter the x coordinate of first point: ");
    scanf("%d",&point1.x);
    printf("Enter the y coordinate of first point: ");
    scanf("%d",&point1.y);

    printf("Enter the x coordinate of second point: ");
    scanf("%d",&point2.x);
    printf("Enter the y coordinate of second point: ");
    scanf("%d",&point2.y);

    printf("coordinates of first point: %d %d \n",point1.x,point1.y);
    printf("coordinates of second point: %d %d \n",point2.x,point2.y);
}