#!/bin/bash

# Check if one argument is provided
if [[ $# -ne 1 ]]; then
  echo "Error: Please provide one argument: filename"
  exit 1
fi

# Extract filename from argument
filename="$1"

# Construct the complete filename with .sql extension
complete_filename="$filename.sql"

# Validate filename (optional)
# You can uncomment the following line to ensure filename is alphanumeric
if [[ ! "$filename" =~ ^[a-zA-Z0-9_]+$ ]]; then
  echo "Error: Filename can only contain letters, numbers, and underscores."
  exit 1
fi

# Define template content (modify as needed)
template="-- Direct Link: 
-- Difficulty: Easy | Medium | Hard
-- DBMS: MySQL"

# Create the file with template content
echo "$template" > "$complete_filename"

# Check if file creation was successful
if [[ $? -eq 0 ]]; then
  echo "File created successfully: $complete_filename (with template content)"
else
  echo "Error: Failed to create file: $complete_filename"
fi
