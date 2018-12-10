#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct point{
	double x;
	double y;
};

struct circle{
	double x;
	double y;
	double r;
};

typedef struct point  POINT;
typedef struct circle  CIRCLE;

int inCircle(POINT,CIRCLE);
POINT readpoint(void);
CIRCLE readcircle(void);

int main(void)
{
	POINT point1=readpoint();
	CIRCLE circle1=readcircle();
	
	int a=inCircle(point1,circle1);
	printf("%d",a);
	
	system("PAUSE");
	return 0;
}

int inCircle(struct point point1,struct circle circle1)
{
    double d=pow(point1.x-circle1.x,2)+pow(point1.y-circle1.y,2);
    if(d<(circle1.r)*(circle1.r))
    return 1;
    else
    return 0;		
} 
POINT readpoint(void)
{
	POINT point1;
	scanf("%lf,%lf",&point1.x,&point1.y);
	return point1;	
}
CIRCLE readcircle(void)
{
	CIRCLE circle1;
	scanf("%lf,%lf,%lf",&circle1.x,&circle1.y,&circle1.r);
	return circle1;
}
