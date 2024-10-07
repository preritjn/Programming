import java.util.Scanner;

class Calc {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Enter the first number: ");
            double num1 = Double.parseDouble(scanner.nextLine());
            System.out.print("Enter the second number: ");
            double num2 = Double.parseDouble(scanner.nextLine());
            System.out.print("Enter the operation(+,-,*,/) : ");
            String operation = scanner.nextLine();
            switch(operation) {
                case "+" -> System.out.println(num1 + num2);
                case "-" -> System.out.println(num1 - num2);
                case "*" -> System.out.println(num1 * num2);
                case "/" -> {
                    if(num2 == 0) {
                        System.out.println("Cannot divide by zero");
                        break;
                    }
                    System.out.println(num1 / num2);
                }
                default -> System.out.println("Invalid operation");
            }
        }
    }
}