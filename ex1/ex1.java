import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        
        Set<Integer> numbers = new HashSet<>();
        for (int i = 0; i < N; i++) {
            numbers.add(scanner.nextInt());
        }
        
        int count = 0;
        for (int num : numbers) {
            if (numbers.contains(num + K)) {
                count++;
            }
            if (numbers.contains(num - K)) {
                count++;
            }
        }
        
        System.out.println(count / 2);
        
        scanner.close();
    }
}