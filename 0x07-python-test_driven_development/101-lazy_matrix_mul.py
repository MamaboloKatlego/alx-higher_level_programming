import numpy as np

def lazy_matrix_mul(m_a, m_b):
    # Convert input matrices to NumPy arrays
    a = np.array(m_a)
    b = np.array(m_b)

    # Perform matrix multiplication using the dot function
    result = np.dot(a, b)

    # Convert the result back to a regular list of lists
    result = result.tolist()

    return result
