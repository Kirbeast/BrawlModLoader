# Build:
# docker build -o . .

# Use an official image
FROM devkitpro/devkitppc:20250527 AS usbloadergx
 
# Copy current folder into container, then compile
COPY . /projectroot/
RUN cd /projectroot && make -j$(nproc)

# Copy the DOL file out of the container
FROM scratch AS export-stage
COPY --from=usbloadergx /projectroot/loader.dol /
