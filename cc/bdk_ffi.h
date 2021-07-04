/*! \file */
/*******************************************
 *                                         *
 *  File auto-generated by `::safer_ffi`.  *
 *                                         *
 *  Do not manually edit this file.        *
 *                                         *
 *******************************************/

#ifndef __RUST_BDK_FFI__
#define __RUST_BDK_FFI__

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BlockchainConfig BlockchainConfig_t;

typedef struct DatabaseConfig DatabaseConfig_t;

typedef struct OpaqueWallet OpaqueWallet_t;

typedef struct {

    OpaqueWallet_t * ok;

    char * err;

} FfiResult_OpaqueWallet_ptr_t;

FfiResult_OpaqueWallet_ptr_t new_wallet_result (
    char const * descriptor,
    char const * change_descriptor,
    BlockchainConfig_t const * blockchain_config,
    DatabaseConfig_t const * database_config);

void free_wallet_result (
    FfiResult_OpaqueWallet_ptr_t wallet_result);


#include <stddef.h>
#include <stdint.h>

typedef struct {

    int32_t ok;

    char * err;

} FfiResult_int32_t;

FfiResult_int32_t sync_wallet (
    OpaqueWallet_t const * opaque_wallet);

typedef struct {

    char * ok;

    char * err;

} FfiResult_char_ptr_t;

FfiResult_char_ptr_t new_address (
    OpaqueWallet_t const * opaque_wallet);

typedef struct {

    char * txid;

    uint32_t vout;

} OutPoint_t;

typedef struct {

    uint64_t value;

    char * script_pubkey;

} TxOut_t;

typedef struct {

    OutPoint_t outpoint;

    TxOut_t txout;

    uint16_t keychain;

} LocalUtxo_t;

/** \brief
 *  Same as [`Vec<T>`][`rust::Vec`], but with guaranteed `#[repr(C)]` layout
 */
typedef struct {

    LocalUtxo_t * ptr;

    size_t len;

    size_t cap;

} Vec_LocalUtxo_t;

typedef struct {

    Vec_LocalUtxo_t ok;

    char * err;

} FfiResult_Vec_LocalUtxo_t;

FfiResult_Vec_LocalUtxo_t list_unspent (
    OpaqueWallet_t const * opaque_wallet);

void free_unspent_result (
    FfiResult_Vec_LocalUtxo_t unspent_result);

BlockchainConfig_t * new_electrum_config (
    char const * url,
    char const * socks5,
    int16_t retry,
    int16_t timeout);

void free_blockchain_config (
    BlockchainConfig_t * blockchain_config);

DatabaseConfig_t * new_memory_config (void);

DatabaseConfig_t * new_sled_config (
    char const * path,
    char const * tree_name);

void free_database_config (
    DatabaseConfig_t * database_config);

void free_string_result (
    FfiResult_char_ptr_t string_result);

void free_int_result (
    FfiResult_int32_t int_result);

/** \brief
 *  Free a Rust-allocated string
 */
void free_string (
    char * string);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __RUST_BDK_FFI__ */
