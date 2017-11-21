-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Valor Médio dos Produtos
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2610

select cast(avg(price) as numeric(35, 2))
from products
