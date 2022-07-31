import java.util.Scanner;

public class main {

    public static void main(String []args) {

        Scanner scan = new Scanner(System.in);

        System.out.println("Enter number to be moduloed");
        int a = scan.nextInt();

        System.out.println("Enter number to be used as modulo");
        int m = scan.nextInt();

        int modulo_result = modulo(a, m);
        System.out.println(a + " modulo " + m + " is " + modulo_result);

    }

    private static int modulo(int a, int m) {

        return a % m;

    }

}
