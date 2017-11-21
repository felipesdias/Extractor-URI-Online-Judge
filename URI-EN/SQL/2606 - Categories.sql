-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Categories
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2606

select p.id, p.name
from products p, categories c
where p.id_categories = c.id and c.name like 'super%'
