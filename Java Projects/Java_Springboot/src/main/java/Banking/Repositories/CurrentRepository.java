package Banking.Repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import Banking.Models.Current_Account;



@Repository
public interface CurrentRepository extends JpaRepository<Current_Account, Integer> {

}
