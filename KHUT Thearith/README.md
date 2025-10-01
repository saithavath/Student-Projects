# PROJECT REPO: KHUT Thearith

---

## 📂 List of Subprojects

1. **Ultimaker Maintenant** Link youtube: 

2. **Ultimaker User** Link youtube: 

3. **Soldering** Link youtube:

4. **Home Assistant (Windows)**
   - **Step 1**: Install Docker from [Docker Desktop](https://www.docker.com/products/docker-desktop)  
   - **Step 2**: Open **Terminal** on Windows  
   - **Step 3**: Run the following commands:
     ```bash
     docker --version                 # Check Docker version
     mkdir E:\HomeAssistant           # Create folder
     cd E:\HomeAssistant              # Go to directory
     
     docker run -d --name homeassistant --privileged --restart=unless-stopped -e TZ=Asia/Phnom_Penh -v \
       E:\HomeAssistant:/config -p 8123:8123 ghcr.io/home-assistant/home-assistant:stable

     docker ps -a                     # (Optional) Check containers
     docker restart homeassistant     # Restart Home Assistant
     docker start homeassistant       # Start Home Assistant
     docker stop homeassistant        # Stop Home Assistant
     docker rm homeassistant          # Remove Home Assistant
     ```

6. **ESPHome (Windows)**  
   *(Example file: `smarthome.yaml`)*  
   - **Step 1**: Install **Python**  
   - **Step 2**: Open **Terminal** on Windows  
   - **Step 3**: Run the following commands:
     ```bash
     python --version                 # Check Python version
     pip --version                    # Check pip version
     pip install esphome              # Install ESPHome
     esphome version                  # Check ESPHome version
     
     mkdir C:\Users\YourUser\ESPHome  # Create folder
     cd C:\Users\YourUser\ESPHome     # Go to directory

     esphome wizard smarthome.yaml    # Create YAML file for ESPHome
     esphome run smarthome.yaml       # Compile & upload to ESP device
     esphome logs smarthome.yaml      # View ESPHome logs
     ```
7. **ESPHome with ESP32 Cam** File name : LBE_Camera.yaml
8. **PCB Attendance Scan** Folder name : PCB Design Attendance Scan

---

## ✅ Progress

- [ ] Task 1  
- [ ] Task 2  
