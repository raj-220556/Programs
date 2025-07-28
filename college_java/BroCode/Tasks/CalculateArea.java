package BroCode.Tasks;
import java.util.Scanner;
// Calculating area of a rectangle
public class CalculateArea {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Width :");
        double Width = scanner.nextDouble();
        System.out.print("Enter Height :");
        double Height = scanner.nextDouble();
        double Area = Width * Height;
        System.out.println("Area of Rectangle is : " + Area);

        scanner.close();
    }
}
