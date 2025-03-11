import time
import example
import threading


def test_define_class():
    # 创建 C++ 对象
    person = example.Person("Alice", 25)

    # 调用成员函数
    print(person.greet())  # 输出: Hello, my name is Alice and I am 25 years old.

    # 修改属性
    person.set_name("Bob")
    person.set_age(30)

    # 获取属性
    print(person.get_name())  # 输出: Bob
    print(person.get_age())   # 输出: 30

# 测试多线程计算
def test_multi_thread():
    start_time = time.time()
    example.multi_thread_compute(100000000, 4)  # 使用 4 个线程
    end_time = time.time()
    print(f"Multi-thread execution time: {end_time - start_time:.2f} seconds")


def compute_task(n):
    while n > 0:
        n -= 1

def python_multi_thread():
    start_time = time.time()
    threads = []
    for _ in range(4):
        thread = threading.Thread(target=compute_task, args=(25000000,))
        threads.append(thread)
        thread.start()
    for thread in threads:
        thread.join()
    end_time = time.time()
    print(f"Python multi-thread execution time: {end_time - start_time:.2f} seconds")


if __name__ == "__main__":
    test_define_class()
    test_multi_thread()
    python_multi_thread()