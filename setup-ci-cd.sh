#!/bin/bash

# CI/CD Setup Script for LeetCode C++ Project
# This script helps you quickly set up the CI/CD environment

set -e

echo "🚀 Setting up CI/CD environment for LeetCode C++ Project"
echo "=================================================="

# Check if Docker is installed
if ! command -v docker &> /dev/null; then
    echo "❌ Docker is not installed. Please install Docker first."
    echo "   Visit: https://docs.docker.com/get-docker/"
    exit 1
fi

# Check if Docker Compose is installed
if ! command -v docker-compose &> /dev/null; then
    echo "❌ Docker Compose is not installed. Please install Docker Compose first."
    echo "   Visit: https://docs.docker.com/compose/install/"
    exit 1
fi

echo "✅ Docker and Docker Compose are available"

# Function to start services
start_services() {
    local profile=$1
    local description=$2
    
    echo ""
    echo "🔧 Starting $description..."
    docker-compose --profile $profile up -d
    
    if [ $? -eq 0 ]; then
        echo "✅ $description started successfully"
    else
        echo "❌ Failed to start $description"
        return 1
    fi
}

# Function to show service status
show_status() {
    echo ""
    echo "📊 Service Status:"
    docker-compose ps
}

# Function to show access information
show_access_info() {
    echo ""
    echo "🌐 Access Information:"
    echo "=================================================="
    
    if docker-compose ps | grep -q "jenkins"; then
        echo "Jenkins: http://localhost:8080"
        echo "  Initial password: Check logs with 'docker-compose logs jenkins'"
    fi
    
    if docker-compose ps | grep -q "sonarqube"; then
        echo "SonarQube: http://localhost:9000"
        echo "  Default credentials: admin/admin"
    fi
    
    if docker-compose ps | grep -q "postgres"; then
        echo "PostgreSQL: localhost:5432"
        echo "  Database: sonarqube, User: sonar, Password: sonar"
    fi
}

# Main menu
while true; do
    echo ""
    echo "🎯 Choose an option:"
    echo "1) Start Development Environment"
    echo "2) Start Testing Environment"
    echo "3) Start Jenkins CI/CD Server"
    echo "4) Start Full CI/CD Stack (Jenkins + SonarQube + PostgreSQL)"
    echo "5) Show Service Status"
    echo "6) Stop All Services"
    echo "7) View Logs"
    echo "8) Clean Up (remove all containers and volumes)"
    echo "9) Exit"
    echo ""
    read -p "Enter your choice (1-9): " choice
    
    case $choice in
        1)
            start_services "dev" "Development Environment"
            show_access_info
            ;;
        2)
            start_services "test" "Testing Environment"
            show_access_info
            ;;
        3)
            start_services "jenkins" "Jenkins CI/CD Server"
            show_access_info
            ;;
        4)
            start_services "jenkins" "Full CI/CD Stack"
            show_access_info
            ;;
        5)
            show_status
            ;;
        6)
            echo "🛑 Stopping all services..."
            docker-compose down
            echo "✅ All services stopped"
            ;;
        7)
            echo "📋 Choose service to view logs:"
            echo "1) Jenkins"
            echo "2) SonarQube"
            echo "3) PostgreSQL"
            echo "4) Development Environment"
            echo "5) All services"
            read -p "Enter your choice (1-5): " log_choice
            
            case $log_choice in
                1) docker-compose logs jenkins ;;
                2) docker-compose logs sonarqube ;;
                3) docker-compose logs postgres ;;
                4) docker-compose logs dev ;;
                5) docker-compose logs ;;
                *) echo "Invalid choice" ;;
            esac
            ;;
        8)
            echo "🧹 Cleaning up all containers and volumes..."
            read -p "This will remove ALL data. Are you sure? (y/N): " confirm
            if [[ $confirm =~ ^[Yy]$ ]]; then
                docker-compose down -v --remove-orphans
                docker system prune -f
                echo "✅ Cleanup completed"
            else
                echo "Cleanup cancelled"
            fi
            ;;
        9)
            echo "👋 Goodbye!"
            exit 0
            ;;
        *)
            echo "❌ Invalid choice. Please enter a number between 1-9."
            ;;
    esac
    
    echo ""
    read -p "Press Enter to continue..."
done
