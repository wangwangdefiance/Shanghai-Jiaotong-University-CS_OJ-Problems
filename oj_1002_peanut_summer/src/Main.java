/**
 * Created by defiance on 2017/6/29.
 */
import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int length=in.nextInt();
        int width=in.nextInt();
        int area=length*width,i=0,j=0,sum=0;
        int[] peanut=new int[area];
        for(i=0;i<area;i++)
        {
            peanut[i]=in.nextInt();
        }
        int testlength=in.nextInt();

        int testwidth=in.nextInt();
        int op_length=0,op_width=0,sum_tmp=0;
        for(op_width=0;op_width<=width-testwidth;op_width++) {
            for (op_length = 0; op_length <=length - testlength; op_length++) {
                sum_tmp=0;
                for (i = op_length; i <op_length+testlength; i++) {
                    for (j = op_width; j <op_width+testwidth; j++) {
                        sum_tmp = sum_tmp + peanut[i * width + j];
                        if(sum_tmp>sum)sum=sum_tmp;
                    }
                }
            }
        }
        System.out.print(sum);
    }
}
