import java.util.Scanner;
import java.util.Collections;
public class Main {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int vezes = sc.nextInt();

      for(int y = 0; y < vezes; y++){  //imput vetor
        int alunos = sc.nextInt();

      int[] vetor = new int[alunos];
      int[] sequencia = new int[alunos];

      for (int i = 0; i < vetor.length; i++) {
        vetor[i] = (int) sc.nextInt();
        sequencia[i] = vetor[i];
    }

    insertionSort(vetor);

    int[] inverso = new int[alunos];
    for (int w = 0; w < vetor.length; w++){  //inverso do vetor
      inverso[w] = vetor[(vetor.length - w) - 1];
    }
    int diferenca = 0;

    for (int i = 0; i < inverso.length; i++) {  //diferença
       if (sequencia[i] == inverso[i]){
         diferenca += 1;
       }
    }

    System.out.printf("%d\n", diferenca);
      }
    }

    public static void insertionSort(int[] vetor) {  //ordena
    int j, i, key;

    for (j = 1; j < vetor.length; j++)
    {
      key = vetor[j];
      for (i = j - 1; (i >= 0) && (vetor[i] > key); i--)
      {
         vetor[i + 1] = vetor[i];
       }
        vetor[i + 1] = key;
    }
}
 
}