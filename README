## EnviSense - Dự án quan trắc điều kiện môi trường thử nghiệm giao tiếp ESP32 ↔ Raspberry Pi với giao thức CoAP
<b><i>Dự án cá nhân</i></b>
- <b>Người thực hiện: </b> Đặng Nguyễn Tiền Hậu
- <b>Thời gian: </b>28/02/2026 - Đang thực hiện

-----------------------
### Tổng quan về dự án
- Dự án là một đề tài nghiên cứu hướng tới việc kết hợp các kiến thức về lĩnh vực:
    + IoT (Internet of Things)
    + Website: NextJS & NestJS
    + Giao thức CoAP (Constrained Application Protocol)
để tạo ra một hệ thống quan trắc điều kiện môi trường tốc độ cao.
- Dự án ngoài vai trò là một đề tài nghiên cứu thì tôi mong muốn nó mang được tiềm năng đưa ra thực tiễn khi được đầu tư, phát triển một cách đầy đủ và quy mô hơn. Triển khai vào các nhà máy, xí nghiệp, nhà ở để đảm bảo tốt điều kiện môi trường được duy trì ở một mức độ lý tưởng và xử lý/báo động khi nhận thấy điều kiện bất thường.

-----------------------
### Kiến trúc hệ thống
```
             WiFi LAN
    ┌────────────────────────┐
    │                        │
    │     Raspberry Pi       │
    │   (CoAP Client/GW)     │
    │        ↓               │
    │   GET /temp            │
    │   PUT /led             │
    │                        │
    └─────────────┬──────────┘
                  │ UDP 5683
                  │
    ┌─────────────▼──────────┐
    │        ESP32           │
    │     (CoAP Server)      │
    │                        │
    │   DHT22 → /temp        │
    │   LED   → /led         │
    └────────────────────────┘
```

-----------------------
### Các tính năng chính
1. ESP32:
    - Đóng vai trò là CoAP Server.
    - Kết nối với DHT11/DHT22: Đo nhiệt độ, độ ẩm.
    - Gửi thông số sang cho Raspberry Pi.

2. Raspberry Pi:
    - Đóng vai trò là CoAP Client.
    - Nhận dữ liệu từ ESP32 (CoAP Server).
    - Sao lưu vào Database để hiển thị dữ liệu lên Website.
3. Yêu cầu chung:
    - Hệ thống hoạt động ổn định.
    - Website được cập nhật theo thời gian thực.
    - ESP32 sử dụng CoAP Observer để chỉ gửi thông số khi có thay đổi, giúp tối ưu hóa giao tiếp trong các hệ thống IoT/M2M có tài nguyên hạn chế.
-----------------------------------------------
### Kết quả
<b>Ưu điểm: </b>
- 

<b>Hạn chế: </b>
- 

-----------------------------------------------
### Liên Hệ
Nếu bạn có bất kỳ câu hỏi nào hoặc muốn đóng góp cho dự án, hãy liên hệ với tôi qua:

- Email: [tienhau.it@gmail.com](mailto:tienhau.it@gmail.com)
- GitHub: [Thomas Dang](https://github.com/HauDNT)
- LinkedIn: [Hau Dang](https://www.linkedin.com/in/haudnt/)