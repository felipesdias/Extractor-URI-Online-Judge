-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Nenhuma Locação
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2616

select c.id, c.name
from customers c
left join locations l on c.id = l.id_customers
where l.locations_date is null
order by c.id
