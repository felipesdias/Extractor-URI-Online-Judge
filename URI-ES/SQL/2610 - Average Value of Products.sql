-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Average Value of Products
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2610

select cast(avg(price) as numeric(35, 2))
from products
