from folly.iobuf import IOBuf


def get_empty_chain() -> IOBuf: ...
def make_chain(data; List[IOBuf]) -> IOBuf: ...
