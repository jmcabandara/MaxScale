#pragma once

class TestConnections;

/**
 * @brief check_sha1 Check that checksum of binlog files on Maxscale machines and all backends are equal
 * @param Test TestConnections object
 * @return 0 if binlog files checksums are identical
 */
int check_sha1(TestConnections* Test);

/**
 * @brief start_transaction Template for test transaction (used by test_binlog()
 * @param Test TestConnections object
 * @return 0 in case of success
 */
int start_transaction(TestConnections* Test);

/**
 * @brief test_binlog Execute a number of tests for check if binlog router is ok
 * (see test description in setup_binlog.cpp)
 * @param Test TestConnections object
 */
void test_binlog(TestConnections* Test);
