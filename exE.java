import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases
        scanner.nextLine(); // Consume the newline

        for (int testCase = 0; testCase < t; testCase++) {
            long left = 0, right = (long) 1e14;
            long balance = 1;

            while (left < right) {
                long mid = (left + right + 1) / 2;
                System.out.println("? " + mid);
                System.out.flush();

                String response = scanner.nextLine();
                if (response.equals("Lucky!")) {
                    balance += mid;
                    left = mid; // Mid is valid, so move the lower bound up
                } else if (response.equals("Fraudster!")) {
                    balance -= mid;
                    right = mid - 1; // Mid is too high, so move the upper bound down
                } else if (response.equals("Fired!")) {
                    return; // Terminate the program if Gustaw is fired
                }
            }

            // Output the determined value of M
            System.out.println("! " + left);
            System.out.flush();
        }
        scanner.close();
    }
}