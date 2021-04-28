/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperimentsInternals.framework/Versions/A/ProactiveExperimentsInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PREResponsesProtocol.h>

@protocol PREResponsesProtocol;
@class NSString, _PASBundleIdResolver;

@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol> {

	id<PREResponsesProtocol> _clientProxy;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(NSString *)clientProcessName;
-(void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 lexiconFilePath:(id)arg11 registerDisplayed:(char)arg12 completion:(/*^block*/id)arg13 ;
-(void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(char)arg3 isUsingQuickResponses:(char)arg4 locale:(id)arg5 modelConfigPath:(id)arg6 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(void)setClientProcessName:(NSString *)arg1 ;
-(_PASBundleIdResolver *)bundleIdResolver;
-(id)preResponseItemArrayFromQuickResponses:(id)arg1 ;
@end

