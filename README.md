\# Arduino LM35 Temp Monitor



\## 1. Mô tả

Dự án Arduino LM35 Temp Monitor là hệ thống giám sát nhiệt độ sử dụng vi điều khiển Arduino và cảm biến LM35.  

Hệ thống đọc dữ liệu từ các kênh cảm biến analog, xử lý và hiển thị dữ liệu qua Serial Monitor theo định dạng dễ quan sát hoặc JSON.  

Mục tiêu của dự án là mô phỏng một mạng cảm biến nhiệt độ cơ bản, phục vụ học tập và thực hành Git/GitHub theo nhóm.



\---



\## 2. Tính năng

\- Đọc dữ liệu nhiệt độ từ cảm biến LM35 qua các chân analog.

\- Hỗ trợ nhiều kênh cảm biến như A0, A1, A2.

\- Hiển thị dữ liệu trên Serial Monitor.

\- Có thể xuất dữ liệu theo định dạng JSON.

\- Quản lý mã nguồn bằng Git và GitHub.

\- Hỗ trợ làm việc nhóm qua branch, commit, pull request và merge.



\---



\## 3. Phần cứng cần thiết



| STT | Thiết bị | Số lượng | Ghi chú |

|-----|----------|----------|--------|

| 1 | Arduino Uno/Nano | 1 | Vi điều khiển chính |

| 2 | Cảm biến LM35 | 1 - 3 | Đọc nhiệt độ |

| 3 | Breadboard | 1 | Lắp mạch thử nghiệm |

| 4 | Dây nối jumper | Nhiều | Kết nối phần cứng |

| 5 | Cáp USB | 1 | Nạp code và cấp nguồn |

| 6 | Máy tính | 1 | Lập trình và theo dõi Serial |



\---



\## 4. Cách sử dụng



\### Bước 1: Kết nối phần cứng

\- Kết nối cảm biến LM35 với Arduino.

\- Chân tín hiệu của cảm biến nối vào các chân analog như A0, A1, A2.

\- Cấp nguồn cho Arduino qua cáp USB.



\### Bước 2: Nạp chương trình

\- Mở file `.ino` bằng Arduino IDE.

\- Chọn đúng board và cổng COM.

\- Nhấn \*\*Upload\*\* để nạp chương trình.



\### Bước 3: Xem dữ liệu

\- Mở \*\*Serial Monitor\*\*.

\- Chọn baud rate `9600`.

\- Quan sát dữ liệu nhiệt độ hiển thị trên màn hình.



\### Bước 4: Quản lý mã nguồn

\- Clone repository về máy:

```bash

git clone https://github.com/<ten-tai-khoan>/<ten-repo>.git

