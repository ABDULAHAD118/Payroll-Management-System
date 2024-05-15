CREATE DATABASE Payroll_Management_System;

CREATE TABLE users (
    ID INT IDENTITY (1, 1) NOT NULL PRIMARY KEY,
    Name VARCHAR (50) NOT NULL,
    Email VARCHAR (50) NOT NULL UNIQUE,
    Phone No VARCHAR (11) NOT NULL UNIQUE,
    Address VARCHAR (50) NOT NULL,
    Password VARCHAR (30) NOT NULL
);

CREATE TABLE Employee (
    Employee_ID INT NOT NULL PRIMARY KEY UNIQUE,
    First_Name VARCHAR (50) NOT NULL,
    Last_Name VARCHAR (50) NOT NULL,
    Gender VARCHAR (10) NOT NULL,
    Phone_Number VARCHAR (12) NOT NULL UNIQUE,
    Email VARCHAR (50) NOT NULL UNIQUE,
    Education VARCHAR (50) NOT NULL,
    CNIC VARCHAR (15) NOT NULL
);

CREATE TABLE Address (
    Employee_ID INT NOT NULL PRIMARY KEY,
    Country VARCHAR (30)  NOT NULL,
    Address VARCHAR (100) NOT NULL,
    Postal_Code VARCHAR (6)   NOT NULL,
    City VARCHAR (50)  NOT NULL,
    FOREIGN KEY (Employee_ID) REFERENCES Employee (Employee_ID)
);

CREATE TABLE Department (
    Department_ID INT IDENTITY (1, 1) NOT NULL PRIMARY KEY,
    Employee_ID INT NOT NULL UNIQUE,
    Department_Name VARCHAR (50) NULL,
    FOREIGN KEY (Employee_ID) REFERENCES Employee (Employee_ID)
);

CREATE TABLE Job (
    Employee_ID INT NOT NULL UNIQUE,
    Job_ID INT IDENTITY (1, 1) NOT NULL PRIMARY KEY,
    Position VARCHAR (50) NULL,
    Joining_Date DATE NULL,
    Department_ID INT NULL,
    FOREIGN KEY (Employee_ID) REFERENCES Employee (Employee_ID]),
    FOREIGN KEY (Department_ID) REFERENCES Department (Department_ID])
);

CREATE TABLE Salary (
    Employee_ID INT NOT NULL PRIMARY KEY,
    Position VARCHAR (50) NULL,
    Salary MONEY NULL,
    FOREIGN KEY (Employee_ID) REFERENCES Employee (Employee_ID)
);

CREATE TABLE Leave (
    Employee_ID INT NOT NULL,
    Leave_Date_To DATE NULL,
    Leave_Date_From DATE NULL,
    Total_Leave INT NULL,
    Reason VARCHAR (MAX) NULL,
    FOREIGN KEY (Employee_ID) REFERENCES Employee (Employee_ID)
);