-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Products by Categories
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2609

select c.name, sum(p.amount)
from products p, categories c
where p.id_categories = c.id
group by c.name
