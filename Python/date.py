import datetime
import pytz

# today = datetime.date.today()
# print(today)
# print(today.year)
# print(today.weekday())  # Monday 0  Sunday 6
# print(today.isoweekday())  # Monday 1  Sunday 7
# t_delta = datetime.timedelta(days=7)
# print(today + t_delta)
# print(today - t_delta)
#
# # date2 = date1 +/- timedelta
# # timedelta = date1 +/- date2
#
# b_day = datetime.date(2023, 10, 30)
# days = b_day - today
# print(days.total_seconds())
#
# t = datetime.time(13, 47, 45, 5420)
# print(t)
# print(t.hour)
#
# dt = datetime.datetime(2023, 6, 3, 2, 31, 58)
# print(dt)
#
# dt_today = datetime.datetime.today()
# dt_now = datetime.datetime.now()
# dt_utcnow = datetime.datetime.utcnow()
#
# print(dt_today)
# print(dt_now)
# print(dt_utcnow)

# dt = datetime.datetime(2023, 6, 3, 2, 49, 59,tzinfo=pytz.UTC)
# print(dt)
#
# dt_now = datetime.datetime.now(tz=pytz.UTC)
# print(dt_now)
# dt_utcnow = datetime.datetime.utcnow().replace(tzinfo=pytz.UTC)
# print(dt_utcnow)

dt_kol = datetime.datetime.now(tz=pytz.timezone('Asia/Kolkata'))
print(dt_kol)

print(dt_kol.strftime('%B %d, %Y'))

dt_str = 'June 03, 2023'

dt = datetime.datetime.strptime(dt_str, '%B %d, %Y')
print(dt)

# for tz in pytz.all_timezones:
#     print(tz)
