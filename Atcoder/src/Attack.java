// https://atcoder.jp/contests/abc302/tasks/abc302_a
// unsolved
// comments:

import java.util.Scanner;
import java.math.BigInteger;



public class Attack{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int k = 0; k < T; k++){
            BigInteger A = sc.nextBigInteger();
            BigInteger B = sc.nextBigInteger();
            System.out.println (A.divide(B).doubleValue());
        }
    }
}

