#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point {
	float x;
	float y;
};

struct circle {
	struct Point point;
	float number;
};

int main() {
	FILE *myfile;
	myfile = fopen("circle.txt", "r");
	if (!myfile) {puts ("Файл не обнаружен."); return 0;}
	char *type;
	char line[100];
	char line1[100];
	struct circle c1;
	while ((fgets(line, 100, myfile)) != 0) {
		strcpy(line1, line);
    		type = strtok(line1, "(");
    		if (strcmp(type, "circle") == 0) {
      			if ((sscanf(line, "circle(%f %f, %f)", &c1.point.x, &c1.point.y, &c1.number)) == 3)
        			printf("circle(%0.2f %0.2f, %0.2f) \n", c1.point.x, c1.point.y, c1.number);
      			else
        			printf("Неправильный тип значений, введите числа.\n");
    		} else
            		printf("Неправильная фигура, введите \"Circle\" \n");
  		}
  return 0;
}