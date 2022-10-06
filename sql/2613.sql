select movies.id,
    movies.name
from movies
    join prices on prices.id = movies.id_prices
where prices.value < 2.00;