import java.util.Scanner;

public class substringComp {

    public static String getSmallestAndLargest(String s, int k) {
        String current = s.substring(0, k);
//        System.out.println(current);
        String smallest = current;
        String largest = current;
//        System.out.println(s.length());
//        System.out.println(s.length() - k);
        for (int i = 0; i <= s.length()-k; i++){
            current = s.substring(i, i+k);
//            System.out.println(i + current);
            if (current.compareTo(largest) > 0){
                largest = current;
            }
            if (current.compareTo(smallest) < 0){
                smallest = current;
            }
        }
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'

        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();

        System.out.println(getSmallestAndLargest(s, k));
    }
}

