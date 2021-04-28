/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/Versions/A/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPRecoveryKeyValidator.h>

@protocol CDPRecoveryKeyValidator;
@class NSString;

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator> {

	id<CDPRecoveryKeyValidator> _validator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRemoteObject:(id)arg1 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(id)generateRecoveryKeyWithError:(id*)arg1 ;
-(char)confirmRecoveryKey:(id)arg1 error:(id*)arg2 ;
@end

