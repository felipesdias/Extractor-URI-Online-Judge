-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: September Rentals
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2614

select c.name, r.rentals_date
from customers c, rentals r
where r.id_customers = c.id and to_char(rentals_date, 'YYYY-MM') = '2016-09'
