"""
01
Write a program that loads an integer or float as a length
of a cube edge and displays its surface,
volume and length of both face and internal diagonal
without math module.
"""


def is_valid_float(number: float) -> None:
    if not 0 < number < float("inf"):
        raise ValueError("Length must be a finite positive number")


def is_valid_int(number: int) -> None:
    if number < 0:
        raise ValueError("Number of decimal places cannot be negative")


def cube_values(length: float, decimals: int) -> str:
    is_valid_float(length)
    is_valid_int(decimals)
    surface: float = 6 * length**2
    volume: float = length**3
    face_diagonal: float = (2 * length**2) ** 0.5
    internal_diagonal: float = (length**2 + face_diagonal**2) ** 0.5

    return f"Surface: {surface:.{decimals}f} square units\nVolume: {volume:.{decimals}f} cubic units\nFace diagonal: {face_diagonal:.{decimals}f} units\nInternal diagonal: {internal_diagonal:.{decimals}f} units"


if __name__ == "__main__":

    def read_length() -> float:
        while True:
            try:
                number: float = float(input("Input length of the edge of the cube: "))
                is_valid_float(number)
                return number
            except ValueError as error:
                print(f"Invalid input: {error}")

    def read_decimals() -> int:
        while True:
            try:
                number: int = int(
                    input("Input number of decimal places you want to work with: ")
                )
                is_valid_int(number)
                return number
            except ValueError as error:
                print(f"Invalid input: {error}")

    a: float = read_length()
    b: int = read_decimals()

    print(cube_values(a, b))
