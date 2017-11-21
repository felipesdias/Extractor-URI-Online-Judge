-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Executive Representatives
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2605

select p.name, c.name
from providers c, products p
where p.id_providers = c.id and p.id_categories = 6
