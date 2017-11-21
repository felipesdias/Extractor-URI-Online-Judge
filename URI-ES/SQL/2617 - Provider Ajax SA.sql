-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Provider Ajax SA
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2617

select p.name, f.name
from products p, providers f
where p.id_providers = f.id and f.name = 'Ajax SA'
