-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Products by Categories
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2609

select c.name, sum(p.amount)
from products p, categories c
where p.id_categories = c.id
group by c.name
