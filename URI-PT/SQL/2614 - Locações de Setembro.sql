-- Autor: Felipe Souza Dias<felipe.s.dias@outlook.com>
-- Nome: Locações de Setembro
-- Nível: 1
-- Categoria: SQL
-- URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2614

select c.name, r.rentals_date
from customers c, rentals r
where r.id_customers = c.id and to_char(rentals_date, 'YYYY-MM') = '2016-09'
