package com.recursion;
import java.util.*;

public class reverse_stack
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elemetns in the array: ");
        int c = sc.nextInt();
        
        Stack<Integer> s = new Stack<Integer>();
        for(int i=0; i<c; i++)
            s.push(sc.nextInt());

        rev(s, c);
        while(c-->0)
        {
            System.out.print(s.pop()+" ");
        }
        sc.close();
    }
    
    static void rev(Stack<Integer> s, int k)
    {
        if(k==1)
            return;

        int p=s.pop();
        rev(s,k-1);
        in(s,p);
    }

    static void in(Stack<Integer> s, int t)
    {
        if(s.size()==0)
        {
           s.push(t);
            return;
        }
        int p=s.pop();
        in(s,t);
        s.push(p);
    }
}