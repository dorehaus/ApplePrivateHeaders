/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarAgentLink/ABRemoteRecord.h>

@class NSString;

@interface ABRemoteInfo : ABRemoteRecord {

	NSString* _meUID;
	NSString* _remoteLocation;

}

@property (copy) NSString * meUID;                       //@synthesize meUID=_meUID - In the implementation block
@property (copy) NSString * remoteLocation;              //@synthesize remoteLocation=_remoteLocation - In the implementation block
+(id)remoteRecordWithUniqueID:(id)arg1 inAddressBook:(id)arg2 ;
+(char)supportsSecureCoding;
-(id)nts_SingleValueForProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)remoteLocation;
-(NSString *)meUID;
-(void)setMeUID:(NSString *)arg1 ;
-(void)setRemoteLocation:(NSString *)arg1 ;
@end

