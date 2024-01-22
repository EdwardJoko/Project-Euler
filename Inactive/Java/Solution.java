// Forces every solution class to implement a common interface
public interface Solution<T> {
    public String compute(T limit);
}
