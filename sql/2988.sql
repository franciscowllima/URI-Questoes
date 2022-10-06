select
	t."name" as name,
	matches.quantidade as matches,
	vitorias.quantidade as vitories,
	derrotas.quantidade as defeats,
	empates.quantidade as draws,
	(vitorias.quantidade * 3) + empates.quantidade as score
from teams t 
left join lateral
	(
	select
	count(*) as quantidade
	from matches m 
	where 
		m.team_1 = t.id  or
		m.team_2 = t.id 
	) as matches on true
left join lateral
	(
	select
	count(*) as quantidade
	from matches m
	where
		(m.team_1 = t.id and
		m.team_1_goals > m.team_2_goals )
		or
		(m.team_2 = t.id and
		m.team_2_goals > m.team_1_goals )
	) as vitorias on true
left join lateral
	(
	select
	count(*) as quantidade
	from matches m
	where
		(m.team_1 = t.id and
		m.team_1_goals < m.team_2_goals )
		or
		(m.team_2 = t.id and
		m.team_2_goals < m.team_1_goals )
	) as derrotas on true
left join lateral
	(
	select
	count(*) as quantidade
	from matches m
	where
		(m.team_1 = t.id or
		m.team_2 = t.id) and
		m.team_1_goals = m.team_2_goals 
	) as empates on true
left join lateral
	(
	select
	count(*) as quantidade
	from matches m
	where
		(m.team_1 = t.id or
		m.team_2 = t.id) and
		m.team_1_goals = m.team_2_goals 
	) as pontos on true
order by score desc