-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Average Value of Products
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2610

select cast(avg(price) as numeric(35, 2))
from products
