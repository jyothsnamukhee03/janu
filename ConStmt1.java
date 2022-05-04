import java.util.*;
public class ConStmt1{
	public static void main(String args[]){
		int marks[] = new int[3];
		int i,total = 0,avg;
		Scanner s = new Scanner(System.in);
		for(i=0;i<3;i++){
			marks[i] = s.nextInt();
			total = total + marks[i];
		}
		for(i=0;i<3;i++){
			if(marks[i] > 100 || marks[i] < 0 ){
				System.out.println("INVALIDMARKS");
				System.exit(0);
			}
		}
		avg = total / 3;
		if(avg >= 70){
			System.out.println("DISTINCTION");
		}else if(avg > 60){
			System.out.println("FIRST");
		}else if(avg > 50){
			System.out.println("SECOND");
		}else if(avg > 40){
			System.out.println("THIRD");
		}else{
			System.out.println("FAIL");
		}
	}
}