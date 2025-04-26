-- Keep a log of any SQL queries you execute as you solve the mystery.

SELECT description FROM crime_scene_reports WHERE year ="2023" AND month = "7" AND day = "28" and street = "Humphrey Street";
-----------------------------------------------------------
SELECT name , transcript FROM interviews WHERE year ="2023" AND month = "7" AND day = "28";
-----------------------------------------------------------
SELECT abbreviation , full_name , city , flights.hour , flights.minute FROM airports
JOIN flights ON airports.id = flights.destination_airport_id
WHERE flights.origin_airport_id = (SELECT id FROM airports WHERE city LIKE "fiftyville")
AND flights.year ="2023" AND flights.month = "7" AND flights.day = "29"
ORDER BY flights.hour , flights.minute;
-----------------------------------------------------------
SELECT DISTINCT name FROM people
INNER JOIN bank_accounts ON people.id = bank_accounts.person_id
INNER JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
INNER JOIN phone_calls ON phone_calls.caller = people.phone_number
INNER JOIN passengers ON passengers.passport_number = people.passport_number
INNER JOIN flights ON flights.id = passengers.flight_id
INNER JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate
WHERE phone_calls.year LIKE "2023" AND phone_calls.month LIKE "7" AND phone_calls.day LIKE "28"
AND atm_transactions.year LIKE "2023" AND atm_transactions.month LIKE "7" AND atm_transactions.day LIKE "28"
AND flights.year ="2023" AND flights.month = "7" AND flights.day = "29" AND flights.minute = "20" AND flights.hour = "8"
AND atm_transactions.atm_location LIKE "Leggett Street" AND atm_transactions.transaction_type LIKE "withdraw"
AND bakery_security_logs.hour LIKE "10" AND bakery_security_logs.minute <= "25" AND bakery_security_logs.minute >= "15"
AND bakery_security_logs.activity LIKE "exit" AND bakery_security_logs.year LIKE "2023"
AND bakery_security_logs.month LIKE "7" AND bakery_security_logs.day LIKE "28";
-----------------------------------------------------------
SELECT name , phone_calls.duration FROM people
INNER JOIN phone_calls ON phone_calls.receiver = people.phone_number OR phone_calls.caller = people.phone_number
WHERE phone_calls.year = "2023" AND phone_calls.month = "7" AND phone_calls.day = "28" AND phone_calls.duration <= "60";
