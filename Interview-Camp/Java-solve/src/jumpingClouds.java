import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class jumpingClouds {
    // Complete the jumpingOnClouds function below.
    static int jumpingOnClouds(int[] c) {
        int count = 0;
        int max = c.length;
        for (int i = 0; i < max; i++, count++) {
            if ( i + 2 < max && c[i+2] != 1) {
                i ++;
            }
        }
        /*for (int i = 0; i < max;) {
            if ( i + 2 < max && c[i+2] != 1) {
                i += 2;
            } else {
                i++;
            }
            count++;
        }*/
        return count;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        //BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] c = new int[n];

        String[] cItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int cItem = Integer.parseInt(cItems[i]);
            c[i] = cItem;
        }

        int result = jumpingOnClouds(c);
        System.out.println(result);
//        bufferedWriter.write(String.valueOf(result));
//        bufferedWriter.newLine();
//
//        bufferedWriter.close();

        scanner.close();
    }
}
