package com.recursion;
import java.util.*;


public class balanced_parentheses 
{
    static int n;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of pairs of parentheses: ");
        n = sc.nextInt();
        
        pr("(",n-1,n);
        sc.close();
    }

    static void pr(String s, int n1, int n2)
    {
        if(n1==n2)
        {
            pr(s+" (",n1-1,n2);
            return;
        }

        else if(n2==1)
        {
            System.out.println(s+" )");
            return;
        }

        if(n1==0)
        {
            pr(s+" )",0,n2-1);
            return;
        }

        else
        {
            pr(s+" (",n1-1,n2);
            pr(s+" )",n1,n2-1);
        }
    }
}
