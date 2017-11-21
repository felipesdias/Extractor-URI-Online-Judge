-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Fornecedor Ajax SA
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2617

select p.name, f.name
from products p, providers f
where p.id_providers = f.id and f.name = 'Ajax SA'
