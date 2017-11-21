-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Categories
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2606

select p.id, p.name
from products p, categories c
where p.id_categories = c.id and c.name like 'super%'
