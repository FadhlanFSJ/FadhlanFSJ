# Lint and Typecheck Commands
## JS/TS Projects
- Install dependencies: npm install --save-dev eslint typescript @typescript-eslint/parser @typescript-eslint/eslint-plugin
- Lint command: npm run lint (add "lint": "eslint . --ext .js,.ts" to package.json)
- Typecheck command: npm run typecheck (add "typecheck": "tsc --noEmit" to package.json)
## Python Projects
- Install dependencies: pip install pylint
- Lint command: pylint **/*.py