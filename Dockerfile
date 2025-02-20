# Set up a basic Arduino simulation environment
FROM ubuntu:20.04

# Install dependencies
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    cmake \
    git \
    curl \
    python3-pip \
    && apt-get clean

# Install Arduino CLI
RUN curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh

# Set up Arduino CLI configuration
COPY config/arduino_config.json /root/.arduino15/

# Copy the simulation code into the Docker container
COPY . /workspace

# Set the working directory
WORKDIR /workspace

# Install Python dependencies
RUN pip3 install -r requirements.txt

# Default command to run
CMD ["bash"]
