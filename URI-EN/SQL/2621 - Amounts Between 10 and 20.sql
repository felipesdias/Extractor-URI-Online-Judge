-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Amounts Between 10 and 20
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2621

select p.name
from products p, providers f
where p.id_providers = f.id and f.name like 'P%' and p.amount >= 10 and p.amount <= 20
