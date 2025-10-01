# PROJECT REPO: KHUT Thearith

---

## List of Subprojects
1. Ultimaker Maintenant

2. Ultimaker User
3. Soldering

4. Home Assistant (Window)
   Step 1 : Go to install docker in website : https://www.docker.com/products/docker-desktop
   Step 2 : Open Terminal on Window
   Step 3 : Type Command :
            1. docker --version                 // Check Version of Docker
            2. mkdir E:\HomeAssistant           // Create Folder
            3. cd E:\HomeAssistant              // Go to directory
            3. docker run -d --name homeassistant --privileged --restart=unless-stopped -e TZ=Asia/Phnom_Penh -v
               E:\HomeAssistant:/config -p 8123:8123 ghcr.io/home-assistant/home-assistant:stable
            4. docker ps -a    //Optional
            5. docker restart homeassistant     // Restart server Home Assistant
            6. docker start homeassistant       // Start Server Home Assistant
            7. docker stop homeassistant        // Stop server Home Assistant
            8. docker rm homeassistant          // Remove Home Assistant
5. ESPHome (Window) (File example name : smarthome.yaml)
   Step 1 : Install Python
   Step 2 : Open Terminal on Window
   Step 3 : Type Command :
            1. python --version                 // Check version python
            2. pip --version                    // Check version pip
            3. pip install esphome              // Install esphome
            4. esphome version                  // Check version esphome
            5. mkdir C:\Users\YourUser\ESPHome  // Create folder
            6. cd C:\Users\YourUser\ESPHome     // Go to directory
            7. esphome wizard smarthome.yaml    // Create yaml file for esphome
            8. esphome run smarthome.yaml       // Compiles and upload code into esp device
            9. esphome logs smarthome.yaml      // Check logs of server esphome

##  Progress

- [ ] Task 1
- [ ] Task 2
