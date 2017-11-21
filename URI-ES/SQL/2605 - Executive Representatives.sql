-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Executive Representatives
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2605

select p.name, c.name
from providers c, products p
where p.id_providers = c.id and p.id_categories = 6
