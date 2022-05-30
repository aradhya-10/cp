package com.recursion;
import java.util.*;

class sort_array
{
    static int n1;
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elemetns in the array: ");
        n1 = sc.nextInt();
        
        int[] a = new int[n1];
        for(int i =0; i<n1; i++)
            a[i]=sc.nextInt();
            
        sort(a, a.length);
        for(int i=0; i<n1; i++)
            System.out.print(a[i]+" ");
        
        sc.close();
    }
    
    static void sort(int[] a, int n)
    {
        if(n==1)
            return;

        int t = a[n-1];
        sort(a, n-1);
        insert(a, n, t);
    }

    static void insert(int[]a, int n2, int t)
    {
        if(n2==1||a[n2-2]<t)
        {
               a[n2-1]=t;
               return;
        }

        int p = a[n2-2];
        insert(a, n2-1, t);
        a[n2-1] = p;
    }
}
