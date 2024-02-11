#!/bin/bash

# Define color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Betty style tests
betty_check() {
	echo -e "${YELLOW}Running Betty Checker tests...${NC}"
	betty_output=$(betty "$(find . -name '*.c' -or -name '*.h' ! -path './build/*')" 2>&1)
	if echo "$betty_output" | grep -qE "(ERROR:|WARNING:)"; then
		echo -e "${RED}Betty style issues found.${NC}"
		echo -e "${RED}Issues:${NC}"
		while IFS= read -r line; do
			if [[ $line =~ ^(.*\.c):[0-9]+: ]]; then
				file="${BASH_REMATCH[1]}"
				issue="${line/${file}:/}"
				echo -e "${YELLOW}File: ${file}${NC}"
				echo -e "${YELLOW}Issue: ${issue}${NC}"
			else
				echo -e "${RED}$line${NC}"
			fi
		done <<<"$betty_output"
		exit 1
	else
		echo
		echo -e "${GREEN}No Betty style issues found.${NC}"
	fi
	echo
}
# Main script
echo -e "${YELLOW}Starting script...${NC}"
betty_check
