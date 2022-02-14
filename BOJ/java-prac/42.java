import java.util.*;

public class code43 {
    public static void solution(String order, String subject){
        Queue<Character> q1 = new LinkedList<>();
        Queue<Character> q2 = new LinkedList<>();
        for(char o : order.toCharArray()) q1.add(o);
        for(char s : subject.toCharArray()) q2.add(s);

        String answer = "YES";
        while(!q1.isEmpty()){
            Character o1 = q1.poll();
            boolean status = false;
            while(!q2.isEmpty())    if(o1 == q2.poll()){
                status = true;
                break;
            }
            if(!status){
                answer = "NO";
                break;
            }
        }

        System.out.println(answer);
    }
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String s1 = s.next();
        String s2 = s.next();
        solution(s1, s2);
    }
}
