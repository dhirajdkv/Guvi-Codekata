import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int b[]=new int[n];
		for(int i=0;i<n;i++){
			b[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
         if(b[i]>b[j]){
					 int tem=b[i];
					 b[i]=b[j];
					 b[j]=tem;
				 }
			}
		}
		String strstr="";
		for(int i=0;i<n;i++){
			strstr=strstr+" "+b[i];
		}
		strstr=strstr.trim();
		System.out.print(strstr);
  }
}
