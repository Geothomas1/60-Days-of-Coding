months = {

   "January": 31,

   "February": 28,

   "March": 31,

   "April": 30,

   "May": 31,

   "June": 30,

   "July": 31,

   "August": 31,

   "September": 30,

   "October": 31,

   "November": 30,

   "December": 31

}
name=input("Enter month name")
print(months.get(name))

m_name=list(months.keys())
m_name.sort()
for i in m_name:
    print(i)

for month in months:
    if months[month] == 30:
        print(month)