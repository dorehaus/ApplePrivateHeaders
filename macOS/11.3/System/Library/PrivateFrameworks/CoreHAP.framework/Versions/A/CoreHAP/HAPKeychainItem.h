/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSData, NSDate;

@interface HAPKeychainItem : HMFObject {

	char _syncable;
	char _invisible;
	NSString* _accessGroup;
	NSNumber* _type;
	NSString* _account;
	NSData* _valueData;
	NSString* _viewHint;
	NSDate* _creationDate;
	NSString* _label;
	NSString* _itemDescription;
	void* _platformReference;
	NSData* _genericData;

}

@property (nonatomic,retain) NSString * accessGroup;                           //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,retain) NSNumber * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                       //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSData * valueData;                               //@synthesize valueData=_valueData - In the implementation block
@property (assign,getter=isSyncable,nonatomic) char syncable;                  //@synthesize syncable=_syncable - In the implementation block
@property (getter=isInvisible,nonatomic,readonly) char invisible;              //@synthesize invisible=_invisible - In the implementation block
@property (assign,nonatomic) void* platformReference;                          //@synthesize platformReference=_platformReference - In the implementation block
@property (nonatomic,retain) NSData * genericData;                             //@synthesize genericData=_genericData - In the implementation block
@property (nonatomic,retain) NSString * viewHint;                              //@synthesize viewHint=_viewHint - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
+(char)isQueryResultValid:(CFDictionaryRef)arg1 shouldIncludeData:(char)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setType:(NSNumber *)arg1 ;
-(NSNumber *)type;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(NSData *)valueData;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)accessGroup;
-(NSString *)viewHint;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setViewHint:(NSString *)arg1 ;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(void)setValueData:(NSData *)arg1 ;
-(char)isInvisible;
-(char)isSyncable;
-(id)initWithQueryResult:(CFDictionaryRef)arg1 shouldIncludeData:(char)arg2 ;
-(char)matchesPublicKeyData:(id)arg1 ;
-(void)setSyncable:(char)arg1 ;
-(void*)platformReference;
-(void)setPlatformReference:(void*)arg1 ;
-(NSData *)genericData;
-(void)setGenericData:(NSData *)arg1 ;
@end

