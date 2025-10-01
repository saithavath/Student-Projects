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
     ```bash
      esphome:
        name: lbe_camera
      
      esp32:
        board: esp32dev
        framework:
          type: esp-idf
      
      # Enable logging
      logger:
      
      # Enable Home Assistant API
      api:
        password: ""
      
      ota:
        - platform: esphome
          password: ""
      wifi:
        ssid: "WiFi SSID"
        password: "Password"
      
        # Enable fallback hotspot (captive portal) in case wifi connection fails
        ap:
          ssid: "Lbe Camera Fallback Hotspot"
          password: "AcQhVs9LLKZu"
      
      
      web_server:
        port: 80
      
      captive_portal:
      
      esp32_camera:
        external_clock:
          pin: GPIO0
          frequency: 20MHz
        i2c_pins:
          sda: GPIO26
          scl: GPIO27
        data_pins: [GPIO5, GPIO18, GPIO19, GPIO21, GPIO36, GPIO39, GPIO34, GPIO35]
        vsync_pin: GPIO25
        href_pin: GPIO23
        pixel_clock_pin: GPIO22
        power_down_pin: GPIO32
        vertical_flip: False
        horizontal_mirror: False
      
      
        # Image settings
        name: ESP CAM
        resolution: 800X600
        
      
      sensor:
        - platform: wifi_signal
          name: "WiFi Signal Sensor"
          update_interval: 5s
        - platform: uptime
          name: Uptime Sensor
      
      
      esp32_camera_web_server:
        - port: 8080
          mode: stream
        - port: 8081
          mode: snapshot
      
        # ...
      # Flashlight
      output:
        - platform: gpio
          pin: GPIO4
          id: gpio_4
      
      ## GPIO_4 is the flash light pin
      light:
        - platform: binary
          output: gpio_4
          name: flashlight
     ```
---

## ✅ Progress

- [ ] Task 1  
- [ ] Task 2  
