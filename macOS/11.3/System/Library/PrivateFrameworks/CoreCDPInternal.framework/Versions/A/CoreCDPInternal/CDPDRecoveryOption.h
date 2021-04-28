/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CDPDRecoveryOption : NSObject {

	NSString* _localizedRecoveryOption;
	/*^block*/id _recoveryHandler;
	long long _recoveryOptionIndex;

}

@property (nonatomic,copy) NSString * localizedRecoveryOption;              //@synthesize localizedRecoveryOption=_localizedRecoveryOption - In the implementation block
@property (nonatomic,copy) id recoveryHandler;                              //@synthesize recoveryHandler=_recoveryHandler - In the implementation block
@property (assign,nonatomic) long long recoveryOptionIndex;                 //@synthesize recoveryOptionIndex=_recoveryOptionIndex - In the implementation block
-(long long)recoveryOptionIndex;
-(NSString *)localizedRecoveryOption;
-(id)recoveryHandler;
-(void)setLocalizedRecoveryOption:(NSString *)arg1 ;
-(void)setRecoveryHandler:(id)arg1 ;
-(void)setRecoveryOptionIndex:(long long)arg1 ;
@end

