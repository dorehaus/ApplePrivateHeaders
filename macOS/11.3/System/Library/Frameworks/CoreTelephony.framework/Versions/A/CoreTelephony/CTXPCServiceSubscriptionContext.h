/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Versions/A/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/TUTelephonySubscription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSNumber;

@interface CTXPCServiceSubscriptionContext : NSObject <TUTelephonySubscription, NSCopying, NSSecureCoding> {

	char _isSimPresent;
	char _isSimGood;
	long long _slotID;
	NSUUID* _uuid;
	NSString* _labelID;
	NSString* _label;
	NSString* _phoneNumber;
	NSNumber* _userDataPreferred;
	NSNumber* _userDefaultVoice;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSString * labelID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * labelID;                        //@synthesize labelID=_labelID - In the implementation block
@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                    //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSNumber * userDataPreferred;              //@synthesize userDataPreferred=_userDataPreferred - In the implementation block
@property (nonatomic,retain) NSNumber * userDefaultVoice;               //@synthesize userDefaultVoice=_userDefaultVoice - In the implementation block
@property (assign,nonatomic) char isSimPresent;                         //@synthesize isSimPresent=_isSimPresent - In the implementation block
@property (assign,nonatomic) char isSimGood;                            //@synthesize isSimGood=_isSimGood - In the implementation block
@property (nonatomic,readonly) long long slotID;                        //@synthesize slotID=_slotID - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
+(char)supportsSecureCoding;
+(id)contextWithSlot:(long long)arg1 ;
+(id)contextWithUUID:(id)arg1 ;
+(id)contextWithServiceDescriptor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)context;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(long long)slotID;
-(id)initWithSlot:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 andSlot:(long long)arg2 ;
-(NSString *)labelID;
-(NSNumber *)userDataPreferred;
-(NSNumber *)userDefaultVoice;
-(char)isSimPresent;
-(char)isSimGood;
-(void)setLabelID:(NSString *)arg1 ;
-(void)setUserDataPreferred:(NSNumber *)arg1 ;
-(void)setUserDefaultVoice:(NSNumber *)arg1 ;
-(void)setIsSimPresent:(char)arg1 ;
-(void)setIsSimGood:(char)arg1 ;
@end

