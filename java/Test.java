class Ex {
    Ex(int a) {
        System.out.println("HEllo world this is " + a ) ;
    }

    Ex() {
        System.out.println("HEllo world") ;
    }
}

class Test{
    public static void main(String[] args) {
        Ex a1 = new Ex() ;
        Ex a2 = new Ex(10) ;
    }
    
}


