package PrimeNumbers;

import java.util.Scanner;

public class BruteForceApproach {

    // Time Complexity O(n)
    // Space Complexity O(1)
    public static boolean isPrime(int number)
    {
        if(number<=1)
            return false;
        for(int i=2;i<number;i++)
            if(number%i==0)
                return false;
        return true;
    }

    public static void main(String[] args) {
        boolean result=isPrime(91);
        if(result)
            System.out.println("Number Is Prime.");
        else
            System.out.println("Number Is Not Prime");
    }
}
