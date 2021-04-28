/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libSecRecord.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_sec_record.h>

@class sec_record_framer, sec_record_nonce_set, NSString;

@interface sec_record : NSObject <OS_sec_record> {

	unsigned char key[32];
	unsigned char integrity_key[32];
	unsigned char write_nonce[16];
	unsigned char read_nonce[16];
	unsigned char nonce[16];
	unsigned long long key_length;
	unsigned long long integrity_key_length;
	unsigned long long tag_length;
	unsigned long long nonce_length;
	int aead;
	unsigned padding : 1;
	unsigned long long padded_size;
	sec_record_framer* framer;
	sec_record_nonce_set* nonce_set;
	/*^block*/id key_update;
	/*^block*/id ready_key_update;
	unsigned long long plaintext_limit;
	unsigned long long aad_limit;
	unsigned long long read_seq_number;
	unsigned long long write_seq_number;
	unsigned long long seq_limit;
	unsigned long long message_limit;
	unsigned read_ready : 1;
	unsigned write_ready : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
@end

