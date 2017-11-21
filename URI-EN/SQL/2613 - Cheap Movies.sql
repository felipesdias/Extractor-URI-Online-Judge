-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Cheap Movies
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2613

select m.id, m.name
from movies m, prices p
where m.id_prices = p.id and p.value < 2.00
