-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Pessoas jurídicas
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2622

select c.name
from customers c, legal_person l
where l.id_customers = c.id
