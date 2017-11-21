-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Quantidades Entre 10 e 20
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2621

select p.name
from products p, providers f
where p.id_providers = f.id and f.name like 'P%' and p.amount >= 10 and p.amount <= 20
