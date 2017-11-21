-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Legal Person
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2622

select c.name
from customers c, legal_person l
where l.id_customers = c.id
