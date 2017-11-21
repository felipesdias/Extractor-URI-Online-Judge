-- Autor: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Nome: Legal Person
-- Nível: %d
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/es/problems/view/2622

select c.name
from customers c, legal_person l
where l.id_customers = c.id
