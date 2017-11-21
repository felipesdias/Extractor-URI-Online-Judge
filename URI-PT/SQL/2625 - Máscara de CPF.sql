-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Máscara de CPF
-- Nível: 2
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2625

select substring(cpf from 1 for 3) || '.' 
    || substring(cpf from 4 for 3) || '.' 
    || substring(cpf from 7 for 3) || '-'
    || substring(cpf from 10 for 2)
from natural_person
