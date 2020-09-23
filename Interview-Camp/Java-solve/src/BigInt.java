import java.math.BigInteger;
import java.util.*;

public class BigInt {
    private static final Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String n1 = scanner.nextLine();
        String n2 = scanner.nextLine();
        scanner.close();
        BigInteger a = new BigInteger(n1);
        BigInteger b = new BigInteger(n2);
        BigInteger added = a.add(b);
        BigInteger mult = a.multiply(b);
        System.out.println(added);
        System.out.println(mult);

    }
}
