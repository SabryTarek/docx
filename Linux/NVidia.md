
import tensorflow as tf

tf.test.is_gpu_avaliable()

print(tf.config.list_physical_devices('gpu'))

print(tf.test.gpu_device_name())


nvidia-smi

nvcc -v

nvcc -V