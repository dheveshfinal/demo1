pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'g++ hello.cpp -o hello'
                echo 'Build successful!'
            }
        }
        stage('Test') {
            steps {
                sh './hello'
                echo 'Test successful!'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploy stage simulated!'
            }
        }
    }

    post {
        failure {
            echo 'Pipeline failed 😔'
        }
    }
}
