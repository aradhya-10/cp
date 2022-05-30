package com.recursion;
import java.util.*;

public class delete_mid_el 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elemetns in the array: ");
        int n = sc.nextInt();
        
        Stack<Integer> s = new Stack<Integer>();
        for(int i=0; i<n; i++)
            s.push(sc.nextInt());

        int c = n/2+1; 
        del(s, c);
        while(n-->1)
        {
            System.out.print(s.pop()+" ");
        }
        sc.close();
    }
    
    static void del(Stack<Integer> s, int k)
    {
        if(k==1)
        {
            s.pop();
            return;
        }
        int p=s.pop();
        del(s,k-1);
        s.push(p);
    }
}
