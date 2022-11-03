///// OQS_TEMPLATE_FRAGMENT_OQS_CURVE_ID_NAME_STR_START
#define QSC_KEMS \
    { 0x0200, "frodo640aes" }, \
    { 0x2F00, "p256_frodo640aes" }, \
    { 0x0201, "frodo640shake" }, \
    { 0x2F01, "p256_frodo640shake" }, \
    { 0x0202, "frodo976aes" }, \
    { 0x2F02, "p384_frodo976aes" }, \
    { 0x0203, "frodo976shake" }, \
    { 0x2F03, "p384_frodo976shake" }, \
    { 0x0204, "frodo1344aes" }, \
    { 0x2F04, "p521_frodo1344aes" }, \
    { 0x0205, "frodo1344shake" }, \
    { 0x2F05, "p521_frodo1344shake" }, \
    { 0x023A, "kyber512" }, \
    { 0x2F3A, "p256_kyber512" }, \
    { 0x023C, "kyber768" }, \
    { 0x2F3C, "p384_kyber768" }, \
    { 0x023D, "kyber1024" }, \
    { 0x2F3D, "p521_kyber1024" }, \
    { 0x0214, "ntru_hps2048509" }, \
    { 0x2F14, "p256_ntru_hps2048509" }, \
    { 0x0215, "ntru_hps2048677" }, \
    { 0x2F15, "p384_ntru_hps2048677" }, \
    { 0x0216, "ntru_hps4096821" }, \
    { 0x2F16, "p521_ntru_hps4096821" }, \
    { 0x0245, "ntru_hps40961229" }, \
    { 0x2F45, "p521_ntru_hps40961229" }, \
    { 0x0217, "ntru_hrss701" }, \
    { 0x2F17, "p384_ntru_hrss701" }, \
    { 0x0246, "ntru_hrss1373" }, \
    { 0x2F46, "p521_ntru_hrss1373" }, \
    { 0x0218, "lightsaber" }, \
    { 0x2F18, "p256_lightsaber" }, \
    { 0x0219, "saber" }, \
    { 0x2F19, "p384_saber" }, \
    { 0x021A, "firesaber" }, \
    { 0x2F1A, "p521_firesaber" }, \
    { 0x0238, "bikel1" }, \
    { 0x2F38, "p256_bikel1" }, \
    { 0x023B, "bikel3" }, \
    { 0x2F3B, "p384_bikel3" }, \
    { 0x023E, "kyber90s512" }, \
    { 0x2F3E, "p256_kyber90s512" }, \
    { 0x023F, "kyber90s768" }, \
    { 0x2F3F, "p384_kyber90s768" }, \
    { 0x0240, "kyber90s1024" }, \
    { 0x2F40, "p521_kyber90s1024" }, \
    { 0x022C, "hqc128" }, \
    { 0x2F2C, "p256_hqc128" }, \
    { 0x022D, "hqc192" }, \
    { 0x2F2D, "p384_hqc192" }, \
    { 0x022E, "hqc256" }, \
    { 0x2F2E, "p521_hqc256" }, \
    { 0x022F, "ntrulpr653" }, \
    { 0x2F2F, "p256_ntrulpr653" }, \
    { 0x0230, "ntrulpr761" }, \
    { 0x2F43, "p256_ntrulpr761" }, \
    { 0x0231, "ntrulpr857" }, \
    { 0x2F31, "p384_ntrulpr857" }, \
    { 0x0241, "ntrulpr1277" }, \
    { 0x2F41, "p521_ntrulpr1277" }, \
    { 0x0232, "sntrup653" }, \
    { 0x2F32, "p256_sntrup653" }, \
    { 0x0233, "sntrup761" }, \
    { 0x2F44, "p256_sntrup761" }, \
    { 0x0234, "sntrup857" }, \
    { 0x2F34, "p384_sntrup857" }, \
    { 0x0242, "sntrup1277" }, \
    { 0x2F42, "p521_sntrup1277" }, \
  

///// OQS_TEMPLATE_FRAGMENT_OQS_CURVE_ID_NAME_STR_END

///// OQS_TEMPLATE_FRAGMENT_ASSIGN_SIG_OIDS_START
#define QSC_SIGS \
	oid_add_from_string("dilithium2", "1.3.6.1.4.1.2.267.7.4.4"); \
	oid_add_from_string("p256_dilithium2", "1.3.9999.2.7.1"); \
	oid_add_from_string("rsa3072_dilithium2", "1.3.9999.2.7.2"); \
	oid_add_from_string("sphincsharaka128frobust", "1.3.9999.6.1.1"); \
	oid_add_from_string("p256_sphincsharaka128frobust", "1.3.9999.6.1.2"); \
	oid_add_from_string("rsa3072_sphincsharaka128frobust", "1.3.9999.6.1.3"); \
	oid_add_from_string("sphincsharaka128fsimple", "1.3.9999.6.1.4"); \
	oid_add_from_string("p256_sphincsharaka128fsimple", "1.3.9999.6.1.5"); \
	oid_add_from_string("rsa3072_sphincsharaka128fsimple", "1.3.9999.6.1.6"); \
	oid_add_from_string("sphincsharaka128srobust", "1.3.9999.6.1.7"); \
	oid_add_from_string("p256_sphincsharaka128srobust", "1.3.9999.6.1.8"); \
	oid_add_from_string("rsa3072_sphincsharaka128srobust", "1.3.9999.6.1.9"); \
	oid_add_from_string("sphincsharaka128ssimple", "1.3.9999.6.1.10"); \
	oid_add_from_string("p256_sphincsharaka128ssimple", "1.3.9999.6.1.11"); \
	oid_add_from_string("rsa3072_sphincsharaka128ssimple", "1.3.9999.6.1.12"); \
	oid_add_from_string("sphincsharaka192frobust", "1.3.9999.6.2.1"); \
	oid_add_from_string("p384_sphincsharaka192frobust", "1.3.9999.6.2.2"); \
	oid_add_from_string("sphincsharaka192fsimple", "1.3.9999.6.2.3"); \
	oid_add_from_string("p384_sphincsharaka192fsimple", "1.3.9999.6.2.4"); \
	oid_add_from_string("sphincsharaka192srobust", "1.3.9999.6.2.5"); \
	oid_add_from_string("p384_sphincsharaka192srobust", "1.3.9999.6.2.6"); \
	oid_add_from_string("sphincsharaka192ssimple", "1.3.9999.6.2.7"); \
	oid_add_from_string("p384_sphincsharaka192ssimple", "1.3.9999.6.2.8"); \
	oid_add_from_string("sphincsharaka256frobust", "1.3.9999.6.3.1"); \
	oid_add_from_string("p521_sphincsharaka256frobust", "1.3.9999.6.3.2"); \
	oid_add_from_string("sphincsharaka256fsimple", "1.3.9999.6.3.3"); \
	oid_add_from_string("p521_sphincsharaka256fsimple", "1.3.9999.6.3.4"); \
	oid_add_from_string("sphincsharaka256srobust", "1.3.9999.6.3.5"); \
	oid_add_from_string("p521_sphincsharaka256srobust", "1.3.9999.6.3.6"); \
	oid_add_from_string("sphincsharaka256ssimple", "1.3.9999.6.3.7"); \
	oid_add_from_string("p521_sphincsharaka256ssimple", "1.3.9999.6.3.8"); \
	oid_add_from_string("sphincssha256128frobust", "1.3.9999.6.4.1"); \
	oid_add_from_string("p256_sphincssha256128frobust", "1.3.9999.6.4.2"); \
	oid_add_from_string("rsa3072_sphincssha256128frobust", "1.3.9999.6.4.3"); \
	oid_add_from_string("sphincssha256128fsimple", "1.3.9999.6.4.4"); \
	oid_add_from_string("p256_sphincssha256128fsimple", "1.3.9999.6.4.5"); \
	oid_add_from_string("rsa3072_sphincssha256128fsimple", "1.3.9999.6.4.6"); \
	oid_add_from_string("sphincssha256128srobust", "1.3.9999.6.4.7"); \
	oid_add_from_string("p256_sphincssha256128srobust", "1.3.9999.6.4.8"); \
	oid_add_from_string("rsa3072_sphincssha256128srobust", "1.3.9999.6.4.9"); \
	oid_add_from_string("sphincssha256128ssimple", "1.3.9999.6.4.10"); \
	oid_add_from_string("p256_sphincssha256128ssimple", "1.3.9999.6.4.11"); \
	oid_add_from_string("rsa3072_sphincssha256128ssimple", "1.3.9999.6.4.12"); \
	oid_add_from_string("sphincssha256192frobust", "1.3.9999.6.5.1"); \
	oid_add_from_string("p384_sphincssha256192frobust", "1.3.9999.6.5.2"); \
	oid_add_from_string("sphincssha256192fsimple", "1.3.9999.6.5.3"); \
	oid_add_from_string("p384_sphincssha256192fsimple", "1.3.9999.6.5.4"); \
	oid_add_from_string("sphincssha256192srobust", "1.3.9999.6.5.5"); \
	oid_add_from_string("p384_sphincssha256192srobust", "1.3.9999.6.5.6"); \
	oid_add_from_string("sphincssha256192ssimple", "1.3.9999.6.5.7"); \
	oid_add_from_string("p384_sphincssha256192ssimple", "1.3.9999.6.5.8"); \
	oid_add_from_string("sphincssha256256frobust", "1.3.9999.6.6.1"); \
	oid_add_from_string("p521_sphincssha256256frobust", "1.3.9999.6.6.2"); \
	oid_add_from_string("sphincssha256256fsimple", "1.3.9999.6.6.3"); \
	oid_add_from_string("p521_sphincssha256256fsimple", "1.3.9999.6.6.4"); \
	oid_add_from_string("sphincssha256256srobust", "1.3.9999.6.6.5"); \
	oid_add_from_string("p521_sphincssha256256srobust", "1.3.9999.6.6.6"); \
	oid_add_from_string("sphincssha256256ssimple", "1.3.9999.6.6.7"); \
	oid_add_from_string("p521_sphincssha256256ssimple", "1.3.9999.6.6.8"); \
	oid_add_from_string("sphincsshake256128frobust", "1.3.9999.6.7.1"); \
	oid_add_from_string("p256_sphincsshake256128frobust", "1.3.9999.6.7.2"); \
	oid_add_from_string("rsa3072_sphincsshake256128frobust", "1.3.9999.6.7.3"); \
	oid_add_from_string("sphincsshake256128fsimple", "1.3.9999.6.7.4"); \
	oid_add_from_string("p256_sphincsshake256128fsimple", "1.3.9999.6.7.5"); \
	oid_add_from_string("rsa3072_sphincsshake256128fsimple", "1.3.9999.6.7.6"); \
	oid_add_from_string("sphincsshake256128srobust", "1.3.9999.6.7.7"); \
	oid_add_from_string("p256_sphincsshake256128srobust", "1.3.9999.6.7.8"); \
	oid_add_from_string("rsa3072_sphincsshake256128srobust", "1.3.9999.6.7.9"); \
	oid_add_from_string("sphincsshake256128ssimple", "1.3.9999.6.7.10"); \
	oid_add_from_string("p256_sphincsshake256128ssimple", "1.3.9999.6.7.11"); \
	oid_add_from_string("rsa3072_sphincsshake256128ssimple", "1.3.9999.6.7.12"); \
	oid_add_from_string("sphincsshake256192frobust", "1.3.9999.6.8.1"); \
	oid_add_from_string("p384_sphincsshake256192frobust", "1.3.9999.6.8.2"); \
	oid_add_from_string("sphincsshake256192fsimple", "1.3.9999.6.8.3"); \
	oid_add_from_string("p384_sphincsshake256192fsimple", "1.3.9999.6.8.4"); \
	oid_add_from_string("sphincsshake256192srobust", "1.3.9999.6.8.5"); \
	oid_add_from_string("p384_sphincsshake256192srobust", "1.3.9999.6.8.6"); \
	oid_add_from_string("sphincsshake256192ssimple", "1.3.9999.6.8.7"); \
	oid_add_from_string("p384_sphincsshake256192ssimple", "1.3.9999.6.8.8"); \
	oid_add_from_string("sphincsshake256256frobust", "1.3.9999.6.9.1"); \
	oid_add_from_string("p521_sphincsshake256256frobust", "1.3.9999.6.9.2"); \
	oid_add_from_string("sphincsshake256256fsimple", "1.3.9999.6.9.3"); \
	oid_add_from_string("p521_sphincsshake256256fsimple", "1.3.9999.6.9.4"); \
	oid_add_from_string("sphincsshake256256srobust", "1.3.9999.6.9.5"); \
	oid_add_from_string("p521_sphincsshake256256srobust", "1.3.9999.6.9.6"); \
	oid_add_from_string("sphincsshake256256ssimple", "1.3.9999.6.9.7"); \
	oid_add_from_string("p521_sphincsshake256256ssimple", "1.3.9999.6.9.8"); \


///// OQS_TEMPLATE_FRAGMENT_ASSIGN_SIG_OIDS_END

