/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXProvider.h>
#import <libobjc.A.dylib/CXProviderExtensionVendorContextDelegate.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling> {

	CXProviderExtensionVendorContext* _extensionContext;

}

@property (nonatomic,retain) CXProviderExtensionVendorContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(CXProviderExtensionVendorContext *)extensionContext;
-(void)setExtensionContext:(CXProviderExtensionVendorContext *)arg1 ;
-(id)hostProtocolDelegate;
-(void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2 ;
-(void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2 ;
-(void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(char)arg2 ;
-(char)requiresProxyingAVAudioSessionState;
@end

