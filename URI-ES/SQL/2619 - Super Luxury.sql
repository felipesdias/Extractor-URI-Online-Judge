-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Super Luxury
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2619

select p.name, f.name, p.price
from products p, providers f, categories c
where p.id_providers = f.id and p.id_categories = c.id and c.name = 'Super Luxury' and p.price > 1000
