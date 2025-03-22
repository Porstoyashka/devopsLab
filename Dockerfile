# Stage 1: Build environment
FROM alpine:latest AS build
RUN apk add --no-cache \
    build-base \
    automake \
    autoconf \
    libtool

WORKDIR /home/httpserver
COPY . .
RUN autoreconf --install
RUN ./configure
RUN make

# Stage 2: Runtime environment
FROM alpine:latest
RUN apk add --no-cache \
    libstdc++ \
    libc6-compat

WORKDIR /app
COPY --from=build /home/httpserver/program /app/program

EXPOSE 8081
ENTRYPOINT ["/app/program"]
