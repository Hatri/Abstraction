import javax.annotation.processing.Generated;
import javax.persistence.*;
import java.util.ArrayList;
import java.util.Collection;

@Entity
@Table(name = "BANKS")
public class Bank implements java.io.Serializable {
    @id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private int id;
}