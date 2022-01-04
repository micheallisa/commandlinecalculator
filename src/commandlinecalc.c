#include<stdio.h>
#include <math.h>



#define PI 3.14159265358979323846264338327950288419716939937510


double addition(double num1, double num2)
{

    double result = num1 + num2;
    return result;
}

double subtraction(double sub1, double sub2)
{

    double result = sub1 - sub2;
    return result;
}
double multiplacation(double Num1, double Num2)
{
    double result = Num1 * Num2;
    return result;
}

double division(double quot1, double quot2)
{
    double result = quot1 / quot2;
    return result;
}

double pow(double base, double exp)
{
    int i;
    double result = 1;

    for (i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}


double persquare(double length)
{
     double result = 4 * length;
    return result;
}


double circum(double radius)
{
    double result = 2 * PI * radius;
    return result;
}

double perecatangele(double length, double width)
{
    double result = (2 * length) + (2 * width);
    return result;
}

double pertriangle(double a, double b, double c)
{
    double result = a + b + c;
    return result;
}

double pertrapazoid(double a, double b, double c, double d)
{
    double result = a + b + c + d;
    return result;
}

double perparallelogram(double a, double b)
{
    double result = 2 * (a + b);
    return result;
}

double asqaure(double side)
{
    double result = pow(side, 2);
    return result;
}

double acircle(double radius)
{
    double result = PI * (pow(radius, 2));
    return result;
}
double arect(double length, double width)
{
    double result = length * width;
    return result;
}

double atriangle(double height, double base)
{
    double result = (base * height) / 2;
    return result;
}

double atrapazoid(double a, double b, double h)
{
    double result = ((a + b) / 2) * h;
    return result;
}

double aparrallelogram(double b, double h)
{
    double result = b * h;
    return result;
}


double cube(double a)
{
    double result = pow(a, 3);
    return result;
}

double sphere(double radius)
{
    double result = (4 * PI * (pow(radius, 3))) / 3;
    return result;
}

double rectprism(double length, double width, double height)
{
    double result = length * width * height;
    return result;
}

double sqaurepyramid(double a, double h)
{
    double result = (pow(a, 2)) * (h / 3);
    return result;
}

double trianglepyramid(double base, double height, double height1)
{
    double result = ((atriangle(base, height)) * height1) / 3;
    return result;
}

double cone(double r, double h)
{
    double result = PI * (pow(r, 2)) * (h / 3 );
    return result;
}


double sin1(double opp, double hyp)
{
    double result = opp / hyp;
    return result;
}

double cos1(double adj, double hyp)
{
    double result = adj / hyp;
    return result;
}

double tan1(double opp, double adj)
{
    double result = opp / adj;
    return result;
}

double pythagorean(double a, double b)
{
    double c1 = (pow(a, 2) + pow(b, 2));
    double c = sqrt(c1);
    return c;
}




int main()
{
    
    double oper1, oper2, a, b, c, d, e, f, len, width, height, r, opp, hyp, adj;
    printf("This is a calculator\n");
    printf("Select one of the following modes:\n\t1: Simple Math (Adding, subtractng, multiplying, etc)\n\t2: Area, perimter and volume (allows you to find the area perimeter and volume of a common shape)\n\t");
    printf("3:Does some simple trig function (sin, cos, tan and Pythograen theorm)\n ");

    int mode;
    scanf("%d", &mode);

    if (mode == 1) {
        printf("Which one would you like to do \n\t 1: Addition \n\t 2: Subtraction \n\t 3: Multiplaction \n\t 4: Division \n\t 5: Powers\n");
        int simplemathchoice;
        scanf("%d", &simplemathchoice);

        switch(simplemathchoice)
        {
            case 1:
                printf("Enter the first number\n");
                scanf("%lf", &oper1);
                printf("Enter the second number: \n");
                scanf("%lf", &oper2);
                printf("%lf\n", addition(oper1, oper2));
                break;
            case 2: 
                printf("Enter the first number: \n");
                scanf("%lf", &oper1);
                printf("Enter the second number: \n");
                scanf("%lf", &oper2);
                printf("%lf\n", subtraction(oper1, oper2));
                break;
            case 3:
                printf("Enter the first number: \n");
                double prod1;
                scanf("%lf", &prod1);
                printf("Enter the second number: \n");
                double prod2;
                scanf("%lf", &prod2);
                printf("Result is: %lf\n", multiplacation(prod1, prod2));
                break;
            case 4:
                printf("Enter the first number:\n");
                double number1;
                scanf("%lf", &number1);
                printf("Enter the second number \n");
                double number2;
                scanf("%lf", &number2);
                printf("Result is: %lf\n", division(number1, number2));
                break;
            case 5:
                printf("Enter base: \n");
                double base;
                scanf("%lf", &base);
                printf("Enter the exponent: \n");
                double exponent;
                scanf("%lf", &exponent);
                printf("%lf\n", pow(base, exponent));
                break;
            default:
                printf("Invalid Choice");
                return -1;
                break;
        }
    }
    else if (mode == 2) {
        printf("Select a type: \n\t 1: Perimeter \n\t 2: Area \n\t 3: Volume \n ");
        int type;
        scanf("%d", &type);

        if (type == 1) {
            printf("What shape do you want to do? \n\t 1: Square \n\t 2: Circle \n\t 3: Rectangle 4: Triangle \n\t 5: Trapazoid \n\t 6: Parallelogram \n ");
            int shape;
            scanf("%d", &shape);

            switch (shape)
            {
            case 1:
                printf("Enter the length of the side: \n");
                scanf("%lf", &len);
                printf("Result is: %lf cm", persquare(len));
                break;
            case 2:
                printf("Enter the radius: \n");
                scanf("%lf", &r);
                printf("Result is: %lf cm\n", circum(r));
                break;
            case 3:
                printf("Enter the length: \n");
                scanf("%lf", &len);
                printf("Enter the width: \n");
                scanf("%lf", &width);
                printf("Result is: %lf cm \n", perecatangele(len, width));
                break;
            case 4:
                printf("Enter the value of a: \n");
                scanf("%lf", &a);
                printf("Enter the value of b: \n");
                scanf("%lf", &b);
                printf("Enter the value of c: \n");
                scanf("%lf", &c);
                printf("Result is: %lf cm", pertriangle(a, b, c));
                break;
            case 5:
                printf("Enter the value of a: \n");
                scanf("%lf", &a);
                printf("Enter the value of b: \n");
                scanf("%lf", &b);
                printf("Enter the value of c: \n");
                scanf("%lf", &c);
                printf("Enter the value of d: \n");
                scanf("%lf", &d);
                printf("Result is: %lf cm", pertrapazoid(a, b, c, d));
                break;
            case 6:
                printf("Enter the value of a: \n");
                scanf("%lf", &a);
                printf("Enter the value of b: \n");
                scanf("%lf", &b);
                printf("Result is: %lf cm\n", perparallelogram(a, b));
                break;
            default:
                printf("Invalid choice");
                return -1;
                break; 
        }
    }
        else if (type == 2) {
            printf("What shape do you want to do? \n\t 1: Square \n\t 2: Circle \n\t 3: Rectangle 4: \n\t Triangle \n\t 5: Trapazoid \n\t 6: Parallelogram \n ");
            int ashape;
            scanf("%d", &ashape);

            switch (ashape)
            {
            case 1:
                printf("Enter the  side length: \n");
                scanf("%lf", &len);
                printf("Area is: %lf cm^2", asqaure(len));
                break;
            case 2:
                printf("Enter the radius: \n ");
                scanf("%lf", &r);
                printf("Area is: %lf cm^2", acircle(r));
                break;
            case 3:
                printf("Enter the length: ");
                scanf("%lf", &len);
                printf("Enter the width: \n");
                scanf("%lf", &width);
                printf("Area is: %lf cm^2", arect(len, width));
                break;
            case 4:
                printf("Enter the base: \n ");
                scanf("%lf", &b);
                printf("Enter the height: \n");
                scanf("%lf", &height);
                printf("Area is: %lf cm^2", atriangle(b, height));
                break;
            case 5:
                printf("Enter the value of a: \n ");
                scanf("%lf", &a);
                printf("Enter the value of b \n");
                scanf("%lf", &b);
                printf("Enter the value of c: \n");
                scanf("%lf", &c);
                printf("Area is:  %lf cm^2", atrapazoid(a, b, c));
                break;
            case 6:
                printf("Enter the value of b: \n ");
                scanf("%lf", &b);
                printf("Enter the value of h: \n");
                scanf("%lf", &height);
                printf("Area is: %lf cm^2", aparrallelogram(b, height));
                break;

            default:
                printf("Invalid Choice");
                return -1;
                break;
            }
           
        } 
        else if (type == 3) {
            printf("Choose a shape to calculate the volume with \n\t 1: Cube \n\t 2: Sphere \n\t 3: Rectangular Prism \n\t 4: Square based pyramid \n\t 5: Triangular based Pyramid \n\t ");
            printf("6: Cone \n ");
            int vshape;
            scanf("%d", &vshape);

            switch (vshape)
            {
            case 1:
                printf("Enter the value of a: \n");
                scanf("%lf", &a);
                printf("Volume is: %lf cm^3", cube(a));
                break;
            case 2:
                printf("Enter the radius: \n");
                scanf("%lf", &r);
                printf("Volume is: %lf cm^3", sphere(r));
                break;
            case 3:
                printf("Enter the length: \n");
                scanf("%lf", &len);
                printf("Enter the width: \n");
                scanf("%lf", &width);
                printf("Enter the heigth: \n");
                scanf("%lf", &height);
                printf("Volume is: %lf cm^3", rectprism(len, width, height));
                break;
            case 4:
                printf("Enter the value of a: \n");
                scanf("%lf", &a);
                printf("Enter the value of h: \n");
                scanf("%lf", &height);
                printf("Volume is: %lf cm^3", sqaurepyramid(a, height));
                break;
            case 5:
                printf("Enter the base: \n");
                scanf("%lf", &b);
                printf("Enter the height of the bottom triangle: \n");
                scanf("%lf", &c);
                printf("Enter the height of the pyramid: \n");
                scanf("%lf", &height);
                printf("Volume is: %lf cm^3", trianglepyramid(b, c, height));
                break;
            case 6:
                printf("Enter the radius: \n");
                scanf("%lf", &r);
                printf("Enter the height: \n");
                scanf("%lf", &height);
                printf("Volume is: %lf cm^3", cone(r, height));
                break;

            default:
                break;
            }
        }
    }
    else if (mode == 3) {
        printf("Select a trig function you would like to do \n\t 1: Sin \n\t 2: Cos \n\t 3: Tan \n\t 4: Pythagorean Theorm \n");
        int trigtype;
        scanf("%d", &trigtype);

        switch (trigtype)
        {
        case 1:
            printf("Enter the opp: \n");
            scanf("%lf", &opp);
            printf("Enter the hyp: \n");
            scanf("%lf", &hyp);
            printf("Sin is: %lf", sin1(opp, hyp));
            break;
        case 2:
            printf("Enter the adj: \n");
            scanf("%lf", &adj);
            printf("Enter the hyp: \n ");
            scanf("%lf", &hyp);
            printf("Cos is: %lf", cos1(adj, hyp));
            break;
        case 3:
            printf("Enter the opp: \n");
            scanf("%lf", &opp);
            printf("Enter the adj: \n");
            scanf("%lf", &adj);
            printf("Tan is: %lf", tan1(opp, adj));
            break;
        case 4:
            printf("Enter the value of a: \n");
            scanf("%lf", &a);
            printf("Enter the value of b: \n");
            scanf("%lf", &b);
            printf("Length of c is: %lf cm", pythagorean(a, b));
            break;
        default:
            break;
        }
    }
    else {
        printf("Invalid mode");
        return -1;
    }
}
