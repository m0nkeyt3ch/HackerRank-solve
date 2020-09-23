
import java.math.BigInteger;
import java.util.*;

public class PrimeCheck {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String n = scanner.nextLine();
        scanner.close();
        boolean check;

        BigInteger num = new BigInteger(n);

        check = num.isProbablePrime(10);

        if (!check){
            System.out.println("not prime");
        } else {
            System.out.println("prime");
        }
    }
}
