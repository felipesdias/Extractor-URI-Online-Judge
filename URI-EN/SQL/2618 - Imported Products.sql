-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Imported Products
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2618

select p.name, f.name, c.name
from products p, providers f, categories c
where p.id_providers = f.id and f.name = 'Sansul SA' and p.id_categories = c.id and c.name = 'Imported'
