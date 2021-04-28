/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSString, NSDate, PKCurrencyAmount;

@interface PKAccountServicingEvent : NSObject <NSSecureCoding, PKRecordObject> {

	NSString* _identifier;
	unsigned long long _status;
	unsigned long long _activityType;
	NSString* _activityIdentifier;
	NSDate* _openDate;
	NSDate* _lastUpdatedDate;
	PKCurrencyAmount* _amount;
	NSString* _reasonCode;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long status;                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * activityIdentifier;                  //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * openDate;                              //@synthesize openDate=_openDate - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdatedDate;                       //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy) PKCurrencyAmount * amount;                      //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * reasonCode;                          //@synthesize reasonCode=_reasonCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)activityType;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)setActivityType:(unsigned long long)arg1 ;
-(NSString *)activityIdentifier;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(PKCurrencyAmount *)amount;
-(NSDate *)lastUpdatedDate;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDate *)openDate;
-(void)setOpenDate:(NSDate *)arg1 ;
-(NSString *)reasonCode;
-(void)setReasonCode:(NSString *)arg1 ;
@end

