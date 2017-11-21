-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Orders in First Half
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2620

select c.name, o.id
from customers c, orders o
where o.id_customers = c.id and o.orders_date >= date '2016-01-01' and o.orders_date < date '2016-07-01'
order by o.id
