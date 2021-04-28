/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMChangeTombstone.h>

@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone {

	NSDictionary* _persistentHistoryChangeTombstone;

}

@property (retain) NSDictionary * persistentHistoryChangeTombstone;              //@synthesize persistentHistoryChangeTombstone=_persistentHistoryChangeTombstone - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectIdentifier;
-(id)externalIdentifier;
-(id)daIsEventOnlyContainer;
-(NSDictionary *)persistentHistoryChangeTombstone;
-(id)shareeOwningListIdentifier;
-(id)shareeDisplayName;
-(id)shareeAddress;
-(id)assignmentOwningReminderIdentifier;
-(void)setPersistentHistoryChangeTombstone:(NSDictionary *)arg1 ;
@end

