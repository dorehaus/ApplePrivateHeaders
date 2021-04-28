/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSession.h>

@interface PKInAppPaymentSession : PKPaymentSession
-(id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2 ;
-(id)_appletForPaymentApplication:(id)arg1 ;
-(id)_appletWithIdentifier:(id)arg1 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 withAuthorizationParameters:(id)arg3 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 ;
-(id)authorizePaymentRequest:(id)arg1 forPaymentApplication:(id)arg2 usingNonce:(id)arg3 withAuthenticationCredential:(id)arg4 isFeatureNotSupportedError:(char*)arg5 ;
@end

