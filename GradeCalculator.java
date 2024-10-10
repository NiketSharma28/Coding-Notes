import java.util.Scanner;
public class GradeCalculator{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the marks obtained: ");
        int marks = scanner.nextInt();

        scanner.close();

        String grade = calculateGrade(marks);
        System.out.println("Grade: " + grade);
    }

    static String calculateGrade(int marks) {
        if (marks >= 90) {
            return "A";
        } else if (marks >= 80) {
            return "B";
        } else if (marks >= 70) {
            return "C";
        } else if (marks >= 60) {
            return "D";
        } else {
            return "F";
        }
    }
}
