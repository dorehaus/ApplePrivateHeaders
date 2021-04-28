/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface BKUserProtectedConfiguration : NSObject {

	NSNumber* _unlockEnabled;
	NSNumber* _identificationEnabled;
	NSNumber* _loginEnabled;
	NSNumber* _applePayEnabled;
	NSNumber* _attentionDetectionEnabled;

}

@property (nonatomic,retain) NSNumber * unlockEnabled;                          //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * identificationEnabled;                  //@synthesize identificationEnabled=_identificationEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * loginEnabled;                           //@synthesize loginEnabled=_loginEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * applePayEnabled;                        //@synthesize applePayEnabled=_applePayEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * attentionDetectionEnabled;              //@synthesize attentionDetectionEnabled=_attentionDetectionEnabled - In the implementation block
-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 effective:(char)arg2 ;
-(NSNumber *)unlockEnabled;
-(void)setUnlockEnabled:(NSNumber *)arg1 ;
-(NSNumber *)identificationEnabled;
-(void)setIdentificationEnabled:(NSNumber *)arg1 ;
-(NSNumber *)loginEnabled;
-(void)setLoginEnabled:(NSNumber *)arg1 ;
-(NSNumber *)applePayEnabled;
-(void)setApplePayEnabled:(NSNumber *)arg1 ;
-(NSNumber *)attentionDetectionEnabled;
-(void)setAttentionDetectionEnabled:(NSNumber *)arg1 ;
@end

