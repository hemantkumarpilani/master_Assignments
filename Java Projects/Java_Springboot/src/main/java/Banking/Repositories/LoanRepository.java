package Banking.Repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import Banking.Models.Loan_Account;

@Repository
public interface LoanRepository extends JpaRepository<Loan_Account, Integer> {

}
