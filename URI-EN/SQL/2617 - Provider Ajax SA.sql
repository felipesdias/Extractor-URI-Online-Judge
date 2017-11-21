-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Provider Ajax SA
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2617

select p.name, f.name
from products p, providers f
where p.id_providers = f.id and f.name = 'Ajax SA'
