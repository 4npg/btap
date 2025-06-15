import requests

for i in range(100000, 101000):
    madinhdanh = f'0252{i:06d}'  # ví dụ từ 025210000000 đến 025210010000
    sobd = f'T{i%10000:06d}'     # hoặc theo định dạng thực tế
    r = requests.get('https://example.com/Home/TraCuu', params={
        'MaNhom': 'TS10 2025-2026',
        'MaDinhDanh': madinhdanh,
        'SoBD': sobd
    })
    if 'Điểm' in r.text:
        print("Found:", madinhdanh, sobd)
