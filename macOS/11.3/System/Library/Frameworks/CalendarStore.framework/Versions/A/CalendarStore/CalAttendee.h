/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CalendarStore.framework/Versions/A/CalendarStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarStore/CalendarStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface CalAttendee : NSObject <NSCopying> {

	id _objectID;
	void* _reserved;
	NSURL* _address;
	NSString* _commonName;
	NSString* _status;

}

@property (readonly) NSURL * address;                    //@synthesize address=_address - In the implementation block
@property (readonly) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
@property (readonly) NSString * status;                  //@synthesize status=_status - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)status;
-(NSURL *)address;
-(NSString *)commonName;
-(id)initWithAddress:(id)arg1 commonName:(id)arg2 status:(id)arg3 ;
@end
