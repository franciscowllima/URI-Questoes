select id, name
from customers 
where id not in (select id_customers from locations);