/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OS_nw_browse_descriptor.h>

@protocol OS_dispatch_data;
@class NSObject, NSString;

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {

	int type;
	char* bonjour_type;
	char* bonjour_domain;
	char* description;
	char* logging_description;
	NSObject*<OS_dispatch_data> custom_data;
	/*^block*/id browse_block;
	unsigned include_txt_record : 1;
	unsigned __pad_bits : 7;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id)redactedDescription;
@end

