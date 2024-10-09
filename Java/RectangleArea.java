package NIKET;
import java.util.Scanner;

class Rectangle {
    double length;
    double width;

    // Method to calculate the area
    double calculateArea() {
        return length * width;
    }
}

public class RectangleArea {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Create an instance of Rectangle
        Rectangle rect = new Rectangle();

        // Input length and width
        System.out.print("Enter the length of the rectangle: ");
        rect.length = scanner.nextDouble();
        System.out.print("Enter the width of the rectangle: ");
        rect.width = scanner.nextDouble();

        // Calculate and display the area
        double area = rect.calculateArea();
        System.out.println("The area of the rectangle is: " + area);
    }
}
