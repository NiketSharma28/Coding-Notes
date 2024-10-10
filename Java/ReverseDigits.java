import java.util.Scanner;

public class ReverseDigits {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter an integer: ");
        int n = scanner.nextInt();
        
        // Convert the number to a string to determine its length
        String numStr = Integer.toString(n);
        int length = numStr.length();
        
        // Create an array to store the reversed digits
        int[] reversedDigits = new int[length];
        
        // Extract and store the digits in reverse order
        for (int i = 0; i < length; i++) {
            reversedDigits[i] = n % 10;
            n /= 10;
        }
        
        // Display the reversed digits
        System.out.print("Reversed digits: ");
        for (int i = 0; i < length; i++) {
            System.out.print(reversedDigits[i]);
        }
        
        scanner.close();
    }
}
