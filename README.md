# 🧵 XV6 Kernel Enhancement Project

본 프로젝트는 MIT에서 제공하는 교육용 운영체제인 [xv6](https://github.com/mit-pdos/xv6-public)를 기반으로,  
운영체제 커널의 주요 기능을 개별적으로 확장 및 구현한 실습 프로젝트입니다.

---

## 📌 프로젝트 개요

xv6의 구조를 분석하고 커널 코드를 수정하여 다음 세 가지 기능을 구현하였습니다:

1. **Lottery Scheduling**  
   → 프로세스마다 티켓 수를 부여하고, 확률 기반으로 CPU를 할당하는 스케줄링 기법 구현

2. **Virtual Memory Protection & Null Pointer Handling**  
   → 사용자 프로세스의 시작 주소를 0이 아닌 주소로 설정하여 널 포인터 접근 방지  
   → `mprotect()` 및 `munprotect()` 시스템 콜을 추가하여 페이지 권한 설정 기능 구현

3. **Kernel Thread & Synchronization**  
   → `clone()`, `join()` 시스템 콜을 구현하여 사용자 수준 커널 스레드 생성  
   → `lock_acquire()`, `lock_release()` 동기화 함수 구현으로 임계영역 보호

---

## 🧠 주요 학습 목표

- 운영체제의 스케줄링 기법 이해 및 커널 수준 구현
- 가상 메모리 구조와 페이지 접근 권한 제어 방식 학습
- 스레드 생성 및 동기화 문제 해결을 위한 커널 수준 설계 경험

---

## 💻 실험 환경

- xv6-public (x86 기반)
- QEMU (x86 가상 머신)
- Ubuntu WSL 환경에서 빌드 및 테스트 수행

---

