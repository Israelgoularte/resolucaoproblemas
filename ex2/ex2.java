import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = Integer.parseInt(scanner.nextLine().trim());

        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(scanner.nextLine().trim());
            Map<String, Integer> accountMap = new HashMap<>();

            for (int j = 0; j < n; j++) {
                String account = scanner.nextLine().trim();
                accountMap.put(account, accountMap.getOrDefault(account, 0) + 1);
            }

            List<String> sortedAccounts = new ArrayList<>(accountMap.keySet());
            Collections.sort(sortedAccounts);

            for (String account : sortedAccounts) {
                System.out.println(account + " " + accountMap.get(account));
            }

            if (i < t - 1) {
                System.out.println();
                scanner.nextLine();
            }
        }

        scanner.close();
    }
}