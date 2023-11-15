# Function to calculate the area of a rectangle

def calculate_rectangle_area(length, width):
	return lenght  * width

# User input
length = float(input("Enter the length of the rectangle: "))
width = float(input("Enter the width of the rectangle: "))

# Calculate and display the area
area = calculate_rectangle_area(length, width)
print(f"The area of the rectangle is: {area:.2}")
