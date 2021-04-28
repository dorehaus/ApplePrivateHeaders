/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientDeviceServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding;
@class SVXDeviceSetupContext, NSString;

@interface SVXClientDeviceService : NSObject <SVXClientServiceConsuming, SVXClientDeviceServicing> {

	id<SVXPerforming> _performer;
	id<SVXClientServiceProviding> _clientServiceProvider;
	SVXDeviceSetupContext* _currentSetupContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endSetup;
-(id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3 ;
-(void)clientServiceDidChange:(char)arg1 ;
-(void)_prepareForSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginSetupWithContext:(id)arg1 ;
-(void)_endSetup;
-(void)prepareForSetupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginSetupWithContext:(id)arg1 ;
-(void)_updateSetupContext;
@end

