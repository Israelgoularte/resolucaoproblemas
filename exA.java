import java.util.*;

public class exA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int q = sc.nextInt(); // Número de casos de teste
        StringBuilder result = new StringBuilder();

        while (q-- > 0) {
            int n = sc.nextInt(); // Comprimento da string
            int k = sc.nextInt(); // Número máximo de movimentos
            String s = sc.next(); // String binária

            char[] arr = s.toCharArray();
            int movesLeft = k; // Movimentos restantes
            int zeroPos = 0; // Posição onde o próximo '0' será movido

            for (int i = 0; i < n; i++) {
                if (arr[i] == '0') {
                    // Calcula a distância que o '0' pode ser movido
                    int distance = Math.min(i - zeroPos, movesLeft);
                    if (distance > 0) {
                        // Move o '0' para a posição mais à esquerda possível
                        arr[i] = '1';
                        arr[zeroPos] = '0';
                        movesLeft -= distance;
                    }
                    zeroPos++; // Atualiza a posição do próximo '0'
                }
            }

            result.append(new String(arr)).append("\n");
        }

        System.out.print(result);
        sc.close();
    }
}