public class ContaCorrente {

  private double saldo;

  public double getSaldo() {
    return this.saldo;
  }

  public void setSaldo(double saldo) {
    if (saldo < 0.00) {
      this.saldo = 0;
    } else {
      this.saldo = saldo;
    }
  
  }

public void depositarQuantia( double valorDeposito) {
  setSaldo( this.getSaldo() + valorDeposito);

}

public boolean SacarQuantia( double valorSaque) {
  double taxa = valorSaque * 0.005 ;
  if (this.getSaldo() >= (valorSaque = taxa) ) {
    this.setSaldo( this.getSaldo() - valorSaque - taxa);
    return true;
  } else {
    return false; // não tinha dinheiro suficiente
  }
  
}

}
