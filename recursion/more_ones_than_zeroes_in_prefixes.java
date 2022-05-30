package com.recursion;
import java.util.*;

public class more_ones_than_zeroes_in_prefixes 
{
    static int n;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of pairs of parentheses: ");
        n = sc.nextInt();
        
        pr("1",1,0);
        sc.close();
    }

    static void pr(String s, int n1, int n0)
    {
        if(n1+n0==n)
        {
            System.out.println(s);
            return;
        }

        else if(n1==n0)
        {
            pr(s+"1",n1+1,n0);
            return;
        }

        else
        {
            pr(s+"1",n1+1,n0);
            pr(s+"0",n1,n0+1);
        }
    }
}
