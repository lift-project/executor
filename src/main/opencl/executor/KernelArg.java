package opencl.executor;

public abstract class KernelArg extends JNIHandle {
    KernelArg(long handle) {
        super(handle);
    }
}
