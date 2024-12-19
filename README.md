# RAPIDS Apprentice Upload Specification

This specification aims to standardize and validate the apprentice data that will be uploaded into the RAPIDS system. It provides documentation and guidelines to ensure data consistency and integrity.

## Table of Contents

- [Installation](#installation)
- [Documentation](#documentation)
- [Getting Help](#getting-help)

## Installation

To set up the project locally, follow these steps:

1. **Clone the repository:**
    ```sh
    git clone https://github.com/csg-org/rapids-apprentice-upload-spec.git
    ```
1. **Navigate to the project directory:**
    ```sh
    cd rapids-apprentice-upload-spec
    ```
1. **Install dependencies using pipenv:**
    ```sh
    pipenv install
    ```

## Documentation

This project uses Sphinx for documentation. To build the documentation locally, follow these steps:

1. **Refresh any changes to the data fields from the tableschema**
    ```sh
    pipenv run python docs/update.py > docs/source/fields.inc
    ```
1. **Start auto-building the docs**
    ```sh
    pipenv run sphinx-autobuild docs/source docs/build
    ```
1. **Open the generated HTML files in your browser:**
    Open http://127.0.0.1:8000 in your browser

## Getting Help

If you encounter any issues or have questions, feel free to open an issue on the [GitHub repository](https://github.com/csg-org/rapids-apprentice-upload-spec/issues).
