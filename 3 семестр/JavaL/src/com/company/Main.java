package com.company;

public class Main {

    public static void main(String[] args) {
        System.out.println("PTU: ");
        College PTU = new College();
        PTU.requirements();
        PTU.typeEd();
        PTU.students(1000);



        System.out.println("\n" + "NSTU: ");
        University NSTU = new University();
        NSTU.requirements();
        NSTU.typeEd();
        NSTU.students(5000);
    }
}
