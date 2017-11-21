-- Author: Felipe Souza Dias  <felipe.s.dias@outlook.com>
-- Name: Action Movies
-- Level: 1
-- Category: SQL
-- URL: https://www.urionlinejudge.com.br/judge/en/problems/view/2611

select m.id, m.name
from movies m, genres g
where m.id_genres = g.id and g.description = 'Action'
