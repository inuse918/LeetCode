select a.product_name, sum(unit) unit
from   Products  a
INNER JOIN Orders b
    ON a.product_id   = b.product_id  
where b.order_date   between '2020-02-01' and '2020-02-29'
group by a.product_id, a.product_name
having sum(unit)>=100;