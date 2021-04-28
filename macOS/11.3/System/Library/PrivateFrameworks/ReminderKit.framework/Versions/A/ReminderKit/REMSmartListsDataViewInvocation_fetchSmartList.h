/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding> {

	char _createIfNeeded;
	NSString* _smartListType;
	NSArray* _reminderIDs;

}

@property (nonatomic,readonly) NSString * smartListType;              //@synthesize smartListType=_smartListType - In the implementation block
@property (nonatomic,readonly) NSArray * reminderIDs;                 //@synthesize reminderIDs=_reminderIDs - In the implementation block
@property (assign,nonatomic) char createIfNeeded;                     //@synthesize createIfNeeded=_createIfNeeded - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)smartListType;
-(id)initWithSmartListType:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(char)arg3 ;
-(NSArray *)reminderIDs;
-(char)createIfNeeded;
-(void)setCreateIfNeeded:(char)arg1 ;
@end

