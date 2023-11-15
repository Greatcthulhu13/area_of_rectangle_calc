#include <stdio.h>

// Function to calculate the area of a rectangle
float calculateRectangleArea(float length, float width) {
	return length * width;
}

int main() {
	// Variables for lenght and width
	float length, width;
	
	// USer input
	printf("Enter the length of the rectangle: ");
	scanf("%f" ,&length);
	
	printf("Enter the width of the rectangle: ");
	scanf("%f" ,&width);
	
	// Calculate and display the area
	float area = calculateRectangleArea(length, width);
	printf("The area of the rectangle is: %.2f\n", area);
	
	return 0;
}
