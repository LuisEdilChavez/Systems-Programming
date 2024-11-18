#include <stdio.h>
#define Pi 3.14159

// LUIS CHAVEZ 10/17/24
// This program computes the weight , volume and area of washers!
// Note: This program should run as I checked variables names and typos but terminal isnt complaining but nothing is showing up.
// Also I dont like vim due to the fact theres no change all occurences feature and I gotta use arrows.


int main(){

	// var declarations
	double innerDia, outerDia, thickness, density;
	int quantity;
	double rimArea, vol, washerWeight, TotalWeight;
	// pointer declarations ( I hate vim I cant click and gotta use arrows).
	double *pinnerDia = &innerDia;
	double *pouterDia = &outerDia;
	double *pthickness = &thickness;
	double *pdensity = &density;
	int *pQuantity = &quantity;
	double *primArea = &rimArea;
	double *pVol = &vol;
	double *pwasherWeight = &washerWeight;
	double *pTotalWeight = &TotalWeight;

	// input/ collecting user data for calcs
	printf("Please enter the inner diameter!\n");
	scanf("%lf", pinnerDia);
	printf("Please enter the outer diameter!\n");
        scanf("%lf", pouterDia);
	printf("Please enter the Thickness!\n");
        scanf("%lf", pthickness);
	printf("Please enter the material density!\n");
        scanf("%lf", pdensity);
	printf("Please enter the amount made!\n");
        scanf("%d", pQuantity);
	
	// Calc stuff aka Processing
	*primArea = Pi * ((*pouterDia / 2) * (*pouterDia / 2)) - Pi * ((*pinnerDia / 2) * ( *pinnerDia /2));
	*pVol = *primArea * (*pthickness);
	*pwasherWeight = *pVol * (*pdensity);
	*pTotalWeight = *pwasherWeight * (*pQuantity);
	// Output / printing stuff
	printf("\n Rim area: %.4f\n", *primArea);
	printf("\n Weight of one washer!  %.4f\n", *pwasherWeight);
	printf("\n Rim area: %.4f\n", *pTotalWeight);

	return 0;
}
