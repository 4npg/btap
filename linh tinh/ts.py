import pandas as pd
import xlsxwriter

# File path
file_path = '/mnt/data/trade_plan_template.xlsx'

# Create a Pandas Excel writer using XlsxWriter as the engine.
with pd.ExcelWriter(file_path, engine='xlsxwriter') as writer:
    workbook = writer.book
    worksheet = workbook.add_worksheet('Plan')
    writer.sheets['Plan'] = worksheet

    # Write headers and setup
    headers = ['Ngày', 'Vốn đầu ngày', 'Lợi nhuận (r)', 'Vốn cuối ngày', 'Rủi ro tối đa', 'Entry', 'Stop-loss', 'Khối lượng'] 
    for col, header in enumerate(headers):
        worksheet.write(3, col, header)

    # Write initial parameters
    worksheet.write('B1', 'Vốn đầu')
    worksheet.write('C1', 200000)
    worksheet.write('B2', 'Mục tiêu')
    worksheet.write('C2', 1000000)
    worksheet.write('B3', 'Số ngày')
    worksheet.write('C3', 25)
    worksheet.write('B4', 'Daily r')
    # Formula for daily rate
    worksheet.write_formula('C4', '=POWER(C2/C3,1/C3)-1')
    worksheet.write('B5', 'Rủi ro %')
    worksheet.write('C5', 0.02)

    # Write day rows and formulas for 25 days
    for i in range(1, 26):
        row = 3 + i
        # Ngày
        worksheet.write_number(row, 0, i)
        # Vốn đầu ngày
        if i == 1:
            worksheet.write_formula(row, 1, '=C1')
        else:
            worksheet.write_formula(row, 1, f'=D{row}')
        # Lợi nhuận (r)
        worksheet.write_formula(row, 2, f'=B{row+1}*$C$4')
        # Vốn cuối ngày
        worksheet.write_formula(row, 3, f'=B{row+1}+C{row+1}')
        # Rủi ro tối đa
        worksheet.write_formula(row, 4, f'=B{row+1}*$C$5')
        # Entry and Stop-loss left blank
        # Khối lượng
        worksheet.write_formula(row, 7, f'=E{row+1}/ABS(F{row+1}-G{row+1})')

    writer.save()

file_path
