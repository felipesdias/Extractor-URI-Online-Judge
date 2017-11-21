// Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
// Nome: Laboratório de Biotecnologia
// Nível: %d
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2669

import java.util.Scanner;
 
/**
 *
 * @author Vinicius Silva
 */
public class Main {
 
    public static void main(String[] args) {
        //final String input = "adbbabdcdbcbacdabbaccdac";
        final String input = new Scanner(System.in).nextLine();
        final char[] arrChar = input.toCharArray();
        //criar um array de inteiro com o mesmo tamanho da entrada
        //a=1, b=2, c=3, ...
        //utilizaremos este array por economia de processamento, para não
        //precisar converter o caractere para o valor correspondente em inteiro
        //sempre que for utilizá-lo
        final int[] arrInt = new int[arrChar.length];
        //variável que vai armazenar a maior soma possível da entrada
        //vai somar todos os caracteres da entrada
        int max = 0;
        //variável que vai armazenar as somas individuais
        //exemplo: se existir a letra 'a' na entrada, mapAlpha[1] vai ser true
        final boolean[] mapAlpha = new boolean[27];
        for (int i = 0; i < arrInt.length; i++) {
            //transforma o char em inteiro (a=1, b=2, ...)
            //um char 'a' convertido para inteiro vira 97, por isso -96
            arrInt[i] = arrChar[i] - 96;
            //altera o mapAlpha no índice inteiro correspondente ao caractere
            //ou seja, se a letra era 'c', arrInt[i] é igual a 3
            //mapAlpha[3] = true
            //ou seja, o número 3 é um resultado possível
            mapAlpha[arrInt[i]] = true;
            //soma total
            max += arrInt[i];
        }
        //cria um mapa com o mesmo objetivo do mapAlpha, porém com o tamanho
        //sendo a soma máxima possível
        //o que faz este mapa:
        //ao encontrarmos uma determinada soma, o boolean do índice igual a soma
        //será alterado para true
        //ou seja, cada número é representado pelo boolean do array
        //num 3 = map[3]; num 4 = map[4]; num 5 = map[5] e assim por diante
        //todos os valores são falsos inicialmente
        //então se este número for um número possível de ser obtido através da
        //soma consecutiva (conforme proposto), então o boolean deste número
        //será alterado para true
        final boolean[] map = new boolean[max];
        //fazemos uma cópia do mapAlpha para o map 'original', onde mapAlpha já
        //tem os valores individuais calculados
        System.arraycopy(mapAlpha, 0, map, 0, Math.min(map.length, mapAlpha.length));
        //variável que armazena o tamanho da cadeia que está sendo calculada
        //atualmente. valor inicial em 1 pois entra no while já calculando o tamanho 2,
        //porque o tamanho 1 já foi calculado no 'for' anterior (mapAlpha[])
        int len = 1;
 
        //calculamos todos os tamanhos de cadeia que sejam menores do que a entrada
        while (++len < arrInt.length) {
            //variável que armazena a soma atual
            int sum = 0;
            //calculamos a soma da primeira cadeia de tamanho 'len'
            //ou seja, se len = 5, calculamos a soma da cadeia de 0 até 4
            for (int i = 0; i < len; i++) {
                sum += arrInt[i];
            }
            //agora, com a soma, podemos 'salvar' que o resultado é um resultado
            //possível de ser obtido através da soma de uma cadeia consecutiva
            map[sum] = true;
            //percorremos o restante da entrada adicionando o valor do próximo
            //caractere e subtraindo o valor mais antigo somado
            //exemplo (len=3):
            //  abbacba
            //  1221321
            //  ↑↑↑
            //  cadeia(122); soma(5)
            //
            //     ↓ soma
            //  1221321
            //  ↑ remove
            //  cadeia (221); soma(5+1-1=5)
            //
            //      ↓ soma
            //  1221321
            //   ↑ remove
            //  cadeia (213); soma(5+3-2=6)
            //
            //       ↓ soma
            //  1221321
            //    ↑ remove
            //  cadeia (132); soma(6+2-2=6)
            //
            for (int i = len; i < arrInt.length; i++) {
                sum += arrInt[i];
                sum -= arrInt[i - len];
                map[sum] = true;
            }
        }
        //contagem de quantos resultados distintos foram encontrados
        //começa em 1 pois a soma total não foi calculada no 'map'
        int distinct = 1;
        for (int i = 1; i < map.length; i++) {
            distinct += (map[i] ? 1 : 0);
        }
        System.out.println(distinct);
    }
}
