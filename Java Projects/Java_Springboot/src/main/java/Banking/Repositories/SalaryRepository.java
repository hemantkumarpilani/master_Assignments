package Banking.Repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import Banking.Models.SalaryAccount;



@Repository
public interface SalaryRepository extends JpaRepository<SalaryAccount, Integer> {

}
