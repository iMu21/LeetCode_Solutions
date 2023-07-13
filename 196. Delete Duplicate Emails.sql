DELETE p2 FROM
Person P1
join Person p2
On p1.Email = p2.Email
where p1.id<p2.id
