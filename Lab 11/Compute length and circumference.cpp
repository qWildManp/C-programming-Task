#include <stdio.h>
#include <math.h>
struct point{float x,y;};
struct line{struct point p1,p2;};
struct triangle{struct line l1,l2,l3;};
float length(struct line);
float circumTri(struct triangle);
int main(){
	struct point  plineOne,plineTwo,ptriOne,ptriTwo,ptriThree;
	struct line aline, trilineOne,trilineTwo,trilineThree;
	struct triangle tri;
	float len,cirAns;
    plineOne.x=2;
	plineOne.y=7;
	
	plineTwo.x=10;
	plineTwo.y=9;

	ptriOne.x=2;
	ptriOne.y=0;

	ptriTwo.x=6;
	ptriTwo.y=5;

	ptriThree.x=8;
	ptriThree.y=3;
	
	aline.p1=plineOne;
	aline.p2=plineTwo;

	trilineOne.p1=ptriOne;
	trilineOne.p2=ptriTwo;

	trilineTwo.p1=ptriTwo;
	trilineTwo.p2=ptriThree;

	trilineThree.p1=ptriThree;
	trilineThree.p2=ptriOne;

	tri.l1=trilineOne;
	tri.l2=trilineTwo;
	tri.l3=trilineThree;

	len=length(aline);
	cirAns=circumTri(tri);
	printf("The length is %f\nThe circumference is %f\n",len,cirAns);
	return 0;
}

float length(struct line l){  //compute length 
	float lensqr,len;
	lensqr=(((l.p1.x)-(l.p2.x))*((l.p1.x)-(l.p2.x)))+(((l.p1.y)-(l.p2.y))*((l.p1.y)-(l.p2.y)));
	len=sqrt(lensqr);
	return len;
}

float circumTri(struct triangle tri){  //compute circumference
	float circum;
	circum=length(tri.l1)+length(tri.l2)+length(tri.l3);
	return circum;
}