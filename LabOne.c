#include <stdio.h>
#define PI 3.14592
#include <math.h>

int main(){

	double diameter_One;
	double diameter_Two;
	double thickness;
	double Rim_Area;
	int quantity;
	double weight;
	double Volume;
	double weight_flat;
	double batch_weight;

	printf("Please enter the Inner diameter\n");
	scanf ("%lf", &diameter_One);

	printf("Please enter the Outer Diameter\n");
	scanf ("%lf", &diameter_Two);

	printf("Please enter the thickness\n");
	scanf ("%lf", &thickness);
	
	printf("Please enter the quantity\n");
	scanf("%d", &quantity);
	
	printf("Please enter the weight\n");
	scanf("%lf", &weight);
	
	Rim_Area = (PI *((diameter_Two/2) * (diameter_Two/2))) - (PI * ((diameter_One/2) * (diameter_One/2)));
	
	Volume = Rim_Area * thickness;
	
	weight_flat = Volume * thickness;

	batch_weight = weight_flat * quantity;
					
	printf("Here is the rim area %f\n", Rim_Area);
	printf("Here is the weight a singular washer%f\n", weight_flat);
	printf("Here is the weight of the batch of washers %f\n", batch_weight);
}
