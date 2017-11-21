-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Pedidos no Primeiro Semestre
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2620

select c.name, o.id
from customers c, orders o
where o.id_customers = c.id and o.orders_date >= date '2016-01-01' and o.orders_date < date '2016-07-01'
order by o.id
