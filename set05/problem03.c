#include <stdio.h>
#include <math.h>
struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel *c); 
void output(Camel c);

int main()
{
	Camel c;
	c=input();
	find_weight(&c);
	output(c);
	return 0;
}

Camel input()
{
	Camel n;
	printf("Enter stomach radius of the camel: ");
	if(scanf("%f",&n.radius));
	printf("Enter height of the camel: ");
	if(scanf("%f",&n.height));
	printf("Enter length of the camel: ");
	if(scanf("%f",&n.length));
	return n;
}

float find_weight(Camel *c)
{
	float product,pi;
	product = sqrt(c->height * c->length);
	pi = 22.0/7.0;
	c->weight = pi * (c->radius * c->radius * c->radius) * product;
}

void output(Camel c)
{
	printf("weight of camel having radius: %.1f , height: %f, length: %f is %f",c.radius, c.length, c.height, c.weight);
}
