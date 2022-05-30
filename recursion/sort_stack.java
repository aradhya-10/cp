package com.recursion;
import java.util.*;
public class sort_stack 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elemetns in the array: ");
        int n = sc.nextInt();
        
        Stack<Integer> s = new Stack<Integer>();
        for(int i=0; i<n; i++)
            s.push(sc.nextInt());

        sort(s);
        while(n-->0)
        {
            System.out.print(s.pop()+" ");
        }
        sc.close();
    }

    static void sort(Stack<Integer> s)
    {
        if(s.size()==1)
            return;
        int t = s.pop();
        sort(s);
        insert(s,t);
    }

    static void insert(Stack<Integer> s, int t)
    {
        if(s.size()==0||s.peek()<t)
        {
            s.push(t);
            return;
        }

        int p = s.pop();
        insert(s,t);
        s.push(p);
    }
}
