select email as Email
from Person
Group by email
HAVING COUNT(email) > 1
