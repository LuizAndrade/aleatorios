package Exercicios;

/**
 * Created by Luiz on 09/11/2016.
 */
public class Exs10 {
    public static void main(String[] args){
        int[] vetor = new int[]{1,4,7,2,3,10,3,5};

        int S = 15;
        int i = 0;
        while(i<vetor.length){
            int cont = i;
            int soma = (vetor[cont] + vetor[cont+1]);
            while(cont != vetor.length){
                if(soma < S){
                    cont++;
                    soma = soma + vetor[cont+1];
                }else if(soma > S){
                    break;
                }else{
                    System.out.println("sequencia");
                    soma = 0;
                    break;
                }
            }
            i++;


        }
    }
}
