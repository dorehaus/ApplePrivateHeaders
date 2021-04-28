/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFAppManagementInformation : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _state;
	unsigned long long _options;
	NSString* _redemptionCode;
	NSString* _unusedRedemptionCode;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long state;                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long options;                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * redemptionCode;                    //@synthesize redemptionCode=_redemptionCode - In the implementation block
@property (nonatomic,copy) NSString * unusedRedemptionCode;              //@synthesize unusedRedemptionCode=_unusedRedemptionCode - In the implementation block
+(char)supportsSecureCoding;
+(id)stringForState:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(NSString *)displayName;
-(void)setState:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)redemptionCode;
-(void)setRedemptionCode:(NSString *)arg1 ;
-(NSString *)unusedRedemptionCode;
-(void)setUnusedRedemptionCode:(NSString *)arg1 ;
-(id)_stringForOptions:(unsigned long long)arg1 ;
@end

