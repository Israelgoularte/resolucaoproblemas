import java.util.HashSet;
import java.util.Scanner;

public class ex3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int e = scanner.nextInt();
        HashSet<Integer> distinctValues = new HashSet<>(e);
        
        for (int i = 0; i < e; i++) {
            distinctValues.add(scanner.nextInt());
        }
        
        System.out.println(distinctValues.size());
        
        scanner.close();
    }
}