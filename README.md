# LeetCode Submissions Sync 

Welcome to my LeetCode submissions repository. This repository automatically syncs all my accepted LeetCode solutions using GitHub Actions.

## 📊 How It Works
1. A scheduled GitHub Action runs daily.
2. It fetches all my solved problems and new submissions from my LeetCode account.
3. It automatically commits and pushes the code to this repository, categorized by difficulty and problem name.

## 🛠️ Setup Reference
This project utilizes the [leetcode-sync](https://github.com/joshcai/leetcode-sync) GitHub Action. 

### Secrets Configured:
- `LEETCODE_SESSION`: Session cookie for authentication.
- `LEETCODE_CSRF_TOKEN`: CSRF token cookie.

---

