import java.util.*;

public class bj1759 {

    static int l;
    static int c;
    static boolean [] visited;
    static Character [] words;
    static Character [] vowels = {'a','e','i','o','u'};

    static void combination(int L, int start){
        if(L == l){
            int vowelCnt = 0;
            StringBuilder str = new StringBuilder();
            for(int i =0; i < c; i++)
                if(visited[i]) {
                    str.append(words[i]);
                for (int j = 0; j < 5; j++)
                        if (vowels[j] == words[i]) {
                            vowelCnt++;
                            break;
                        }
                }
            if(vowelCnt >= 1 && vowelCnt < l-1) System.out.println(str);
        }
        for(int i = start; i < c; i++){
            visited[i] = true;
            combination(L+1, i+1);
            visited[i] = false;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        l = scan.nextInt();
        c = scan.nextInt();

        words = new Character [c];
        visited = new boolean [c];

        for(int i =0; i < c; i++)
            words[i] = scan.next().charAt(0);

        Arrays.sort(words);
        combination(0,0);
    }
}
