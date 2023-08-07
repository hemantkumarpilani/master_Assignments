package Banking.Repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import Banking.Models.SavingAccount;



@Repository
public interface SavingRepository extends JpaRepository<SavingAccount, Integer> {

}
