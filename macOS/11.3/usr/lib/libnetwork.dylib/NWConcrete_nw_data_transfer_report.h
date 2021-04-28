/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_data_transfer_report.h>

@class NWConcrete_nw_connection, NSString;

@interface NWConcrete_nw_data_transfer_report : NSObject <OS_nw_data_transfer_report> {

	unsigned long long start_time;
	unsigned long long duration_milliseconds;
	NWConcrete_nw_connection* connection;
	os_unfair_lock_s lock;
	unsigned path_count;
	unsigned allocated_path_count;
	int state;
	nw_data_transfer_path_report primary_path;
	nw_data_transfer_path_report* secondary_paths;
	unsigned collection_in_progress : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
@end
