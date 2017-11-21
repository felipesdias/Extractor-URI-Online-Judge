-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Representantes Executivos
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2605

select p.name, c.name
from providers c, products p
where p.id_providers = c.id and p.id_categories = 6
