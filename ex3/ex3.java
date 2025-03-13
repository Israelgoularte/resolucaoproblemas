import java.util.*;


public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        int[] numbers = new int[num];
        int distintos = 0;

        for(int i = 1; i <= num; i++){
            numbers[i] = scanner.nextInt();

            if(numbers.indexOf(numbers[i]) == -1){
                distintos++;
            }
        }
        System.out.println(distintos);
        scanner.close();
    }
}