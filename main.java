import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        System.out.println("Hello world!");
        int i = enterNumber();
        System.out.println(i);

    } 

    private static int enterNumber() {
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        return i;
    }
}
