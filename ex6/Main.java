import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        
        int prevT = 0, prevX = 0, prevY = 0;
        boolean possible = true;
        
        for (int i = 0; i < N; i++) {
            int t = scanner.nextInt();
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            
            int dt = t - prevT;
            int dist = Math.abs(x - prevX) + Math.abs(y - prevY);
            
            if (dist > dt || (dt - dist) % 2 != 0) {
                possible = false;
                break;
            }
            
            prevT = t;
            prevX = x;
            prevY = y;
        }
        
        scanner.close();
        
        if (possible) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}