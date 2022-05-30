package com.recursion;
import java.util.*;

public class josephus_problem 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of positions in the circle ");
        int c = sc.nextInt();
        
        Vector<Integer> v = new Vector<Integer>();
        for(int i=0; i<c; i++)
            v.add(i+1);
        
        System.out.print("Enter the value of k");
        int k=sc.nextInt();

        int t=solve(v,k,-1);
        System.out.println("Position of Josephus: " + t);
        sc.close();
    }

    static int solve(Vector<Integer> v, int k, int t)
    {
        if(v.size()==1)
            return v.elementAt(0);

        v.removeElementAt((k+t)%v.size());
        return solve(v,k,t+k);
    }
}
