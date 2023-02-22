#include <stdio.h>
#define pi 3.14
int main(){
typedef struct Point{
    float x;
    float y;
} point;
typedef struct circle{
    char name[100];
    point krug;
    float radius;
} circle;
printf("Введите фигуру координаты и радиус\n");
circle circle1;
scanf("%f,%f,%f",&circle1.krug.x,&circle1.krug.y,&circle1.radius);
printf("%f %f %f",circle1.krug.x ,circle1.krug.y,circle1.radius);
return 0;
}






