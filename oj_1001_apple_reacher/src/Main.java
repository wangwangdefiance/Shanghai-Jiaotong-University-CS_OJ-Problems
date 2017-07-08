/**
 * Created by defiance on 2017/6/29.
 */
import java.util.Scanner;
public class Main {
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int height=in.nextInt();
        height=height+in.nextInt();
        int numOfApples=in.nextInt();
        int i=0,j=0;
        int[] apples;
        apples=new int[numOfApples];
        for(i=0;i<numOfApples;i++)
        {
            apples[i]=in.nextInt();
            if (height>=apples[i])
            j++;
        }
        System.out.println(j);
    }
}
