#include<stdio.h>
int main(){
    char shape;
    float area,radius,side,length,width,height,base;
    printf("ENTER THE SHAPE (C for CIRCLE,S for SQUARE ,U for CUBE,R for RECTANGLE,T for TRIANGLE : ");
    scanf("%c",&shape);
    switch(shape){
        
        case 'C':
        case 'c':
        //CIRCLE = pi*radius*radius
        printf("ENTER THE RADIUS OF CIRCLE: ");
        scanf("%f",&radius);
        area=3.14*radius*radius ;
        break;
        
        case 'S':
        case 's':
        //SQUARE = SIDE*SIDE
        printf("ENTER THE SIDE LENGTH OF SQUARE: ");
        scanf("%f",&side);
        area=side*side;
        break;
        
        case 'U':
        case 'u':
        //CUBE=6*SIDE*SIDE
        printf("ENTER THE SIDE LENGTH OF CUBE: ");
        scanf("%f",&side);
        area=6*side*side;
        break;
        
        case 'R':
        case 'r':
        //RECTANGLE=LENGTH*WIDTH
        printf("ENTER THE LENGTH OF RECTANGLE: ");
        scanf("%f",&length);
        printf("ENTER THE WIDTH OF RECTANGLE: ");
        scanf("%f",&width);
        area=length*width;
        break;
        
        case 'T':
        case 't':
        //TRIANGLE=.5*BASE*HEIGHT
        printf("ENTER THE BASE OF TRIANGLE: ");
        scanf("%f",&base);
        printf("ENTER THE HEIGHT OF TRIANGLE: ");
        scanf("%f",&height);
        area=.5*base*height;
        break;
        
        default:
        printf("INVALID SHAPE\n");
    }	 	  	 	   	  	   	    	 	   	     	 	
    printf("AREA OF THE %c SHAPE: %.2f\n",shape,area);
    return 0;
}