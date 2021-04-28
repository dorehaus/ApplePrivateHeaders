/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SVXClientServiceServer, SVXServiceCommandHandler, SVXSessionManager, SVXSpeechSynthesizer, SVXSystemObserver, SVXDeviceSetupManager;


@protocol SVXModuleInstanceProviding <NSObject>
@property (nonatomic,readonly) SVXClientServiceServer * clientServiceServer; 
@property (nonatomic,readonly) SVXServiceCommandHandler * serviceCommandHandler; 
@property (nonatomic,readonly) SVXSessionManager * sessionManager; 
@property (nonatomic,readonly) SVXSpeechSynthesizer * speechSynthesizer; 
@property (nonatomic,readonly) SVXSystemObserver * systemObserver; 
@property (nonatomic,readonly) SVXDeviceSetupManager * deviceSetupManager; 
@required
-(SVXSessionManager *)sessionManager;
-(SVXSpeechSynthesizer *)speechSynthesizer;
-(SVXServiceCommandHandler *)serviceCommandHandler;
-(id)moduleInstanceWithIdentifier:(id)arg1;
-(SVXClientServiceServer *)clientServiceServer;
-(SVXSystemObserver *)systemObserver;
-(SVXDeviceSetupManager *)deviceSetupManager;

@end

