class staticFinal {
    static int staticCounter = 0 ;

    final int instanceID ; 

    staticFinal() {
        staticCounter++ ;
        instanceID = staticCounter ;
    }

    static void showStaticCounter() {
        System.out.println("Static Counter: " + staticCounter); 
    }

    void showDetails() {
        System.out.println("Object ID: " + instanceID);
    } 
}

