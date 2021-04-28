/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSDeveloperSettings : NSObject <NSSecureCoding> {

	char _isInSetTopBoxMode;
	char _cacheBusterEnabled;
	char _requestTimeoutsDisabled;
	char _simulateExpiredToken;
	char _setTopBoxUseDeviceProfile;
	char _setTopBoxSupportsOptOut;
	NSString* _setTopBoxBundleIdentifier;
	NSString* _setTopBoxUserToken;
	NSString* _setTopBoxIdentityProviderID;

}

@property (assign,nonatomic) char isInSetTopBoxMode;                            //@synthesize isInSetTopBoxMode=_isInSetTopBoxMode - In the implementation block
@property (assign,nonatomic) char cacheBusterEnabled;                           //@synthesize cacheBusterEnabled=_cacheBusterEnabled - In the implementation block
@property (assign,nonatomic) char requestTimeoutsDisabled;                      //@synthesize requestTimeoutsDisabled=_requestTimeoutsDisabled - In the implementation block
@property (assign,nonatomic) char simulateExpiredToken;                         //@synthesize simulateExpiredToken=_simulateExpiredToken - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxBundleIdentifier;                //@synthesize setTopBoxBundleIdentifier=_setTopBoxBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxUserToken;                       //@synthesize setTopBoxUserToken=_setTopBoxUserToken - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxIdentityProviderID;              //@synthesize setTopBoxIdentityProviderID=_setTopBoxIdentityProviderID - In the implementation block
@property (assign,nonatomic) char setTopBoxUseDeviceProfile;                    //@synthesize setTopBoxUseDeviceProfile=_setTopBoxUseDeviceProfile - In the implementation block
@property (assign,nonatomic) char setTopBoxSupportsOptOut;                      //@synthesize setTopBoxSupportsOptOut=_setTopBoxSupportsOptOut - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaults;
-(char)simulateExpiredToken;
-(void)setIsInSetTopBoxMode:(char)arg1 ;
-(void)setCacheBusterEnabled:(char)arg1 ;
-(void)setRequestTimeoutsDisabled:(char)arg1 ;
-(void)setSimulateExpiredToken:(char)arg1 ;
-(void)setSetTopBoxBundleIdentifier:(NSString *)arg1 ;
-(void)setSetTopBoxUserToken:(NSString *)arg1 ;
-(void)setSetTopBoxIdentityProviderID:(NSString *)arg1 ;
-(void)setSetTopBoxUseDeviceProfile:(char)arg1 ;
-(void)setSetTopBoxSupportsOptOut:(char)arg1 ;
-(char)isInSetTopBoxMode;
-(char)cacheBusterEnabled;
-(char)requestTimeoutsDisabled;
-(NSString *)setTopBoxBundleIdentifier;
-(NSString *)setTopBoxUserToken;
-(NSString *)setTopBoxIdentityProviderID;
-(char)setTopBoxUseDeviceProfile;
-(char)setTopBoxSupportsOptOut;
@end
