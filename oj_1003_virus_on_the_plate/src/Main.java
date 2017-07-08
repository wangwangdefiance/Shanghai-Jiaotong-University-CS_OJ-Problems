/**
 * Created by defiance on 2017/6/29.
 */
import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        int length=in.nextInt(),i;
        int[] grid,grid_tmp;
        grid_tmp=new int[length*length];
        for(i=0;i<length*length;i++)
        {
            grid_tmp[i]=in.nextInt();
        }

        int count=0;
        boolean flag=false;
        while(!flag)
        {
            flag=true;
            count++;
            grid=grid_tmp;
            grid_tmp=new int[length*length];
            for(i=0;i<length*length;i++)
            {
                grid_tmp[i]=0;
            }

            for(i=0;i<length*length;i++)
            {
                if(grid[i]!=0)
                {grid_tmp[i]=grid[i];}
                if(grid[i]==1)
                {
                    if(i==0)
                    {
                        if(grid[1]==0)
                        {grid_tmp[1]=1;flag=false;}
                        if(grid[length]==0)
                        {
                            grid_tmp[length]=1;flag=false;
                        }
                    }
                    else
                    {
                        if(i>=length)
                        {if(grid[i-length]==0){grid_tmp[i-length]=1;flag=false;}}
                        if(i<length*length-length)
                        {if(grid[i+length]==0){grid_tmp[i+length]=1;flag=false;}}
                        if(i%length!=0)
                        {if(grid[i-1]==0){grid_tmp[i-1]=1;flag=false;}}
                        if((i+1)%length!=0)
                        {if(grid[i+1]==0){grid_tmp[i+1]=1;flag=false;}}
                    }
                }
            }
        }
        System.out.println(count-1);
    }
}
