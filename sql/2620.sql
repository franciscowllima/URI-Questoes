SELECT C.name AS name, O.id AS id FROM customers C
JOIN orders O ON C.id = O.id_customers
WHERE O.orders_date BETWEEN '2016-01-01' AND '2016-06-30'