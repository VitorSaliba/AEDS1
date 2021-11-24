public class Main {

  public static void main(String[] args) {
    // criou uma conta
  
    ContaCorrente dinheiroSaldo = new ContaCorrente();
    dinheiroSaldo.setSaldo(1000.00);
    System.out.println("Saldo na conta dinheiroSaldo :" + dinheiroSaldo.getSaldo() + " ");
        
    // esse procedimento está correto porém o ideal seria
    // assim
    
    ContaCorrente bancoItau = new ContaCorrente();
    bancoItau.depositarQuantia( 800.00 ); 
    System.out.println("Saldo na conta Itaú:" + bancoItau.getSaldo() + " ");
      
    // acima fizemos do jeito recomendado. Criamos a ContaCorrente
    // depois fizemos o depósito inicial
    
    // agora abaixo vamos depositar uma grana
    dinheiroSaldo.depositarQuantia(300.00);
    // agora vamos exibir o novo saldo
    System.out.println("Saldo atual com deposito :" + dinheiroSaldo.getSaldo() + " ");
    
    // agora vamos depositar na outra conta que é Itaú
    bancoItau.depositarQuantia(50.00);
    // agora vamos exibir o novo saldo
    System.out.println("Saldo atual com deposito :" + bancoItau.getSaldo() + " ");
    
    // agora vamos sacar dinheiro das contas 
    
    if (dinheiroSaldo.SacarQuantia(900.00) ) {
      System.out.println("Saque realizado com sucesso");
      System.out.println("Saldo após o saque:" + dinheiroSaldo.getSaldo() + " ");
    
    }  else {
      System.out.println("Saldo insuficiente. Não realizado");
    }
    
    // agora vamos sacar do banco Itaú 
    if (bancoItau.SacarQuantia(900.00) ) {
      System.out.println("Saque realizado com sucesso");
      System.out.println("Saldo após o saque:" + 
                 bancoItau.getSaldo() + " ");
    
    }  else {
      System.out.println("Saldo insuficiente. Não realizado");
    }

  }

}