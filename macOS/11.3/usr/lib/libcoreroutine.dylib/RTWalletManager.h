/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDefaultsManager;

@interface RTWalletManager : RTService {

	RTDefaultsManager* _defaultsManager;
	double _maximumTransactionDistance;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (assign,nonatomic) double maximumTransactionDistance;                //@synthesize maximumTransactionDistance=_maximumTransactionDistance - In the implementation block
-(id)init;
-(void)_setup;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(RTDefaultsManager *)defaultsManager;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)initWithDefaultsManager:(id)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)onDefaultsUpdate:(id)arg1 ;
-(void)setMaximumTransactionDistance:(double)arg1 ;
-(void)updateDoubleForKey:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_unregisterPassUseCallbacks;
-(void)_unregisterPaymentUseCallbacks;
-(void)_registerPassUseCallbacks;
-(void)_registerPaymentUseCallbacks;
-(double)maximumTransactionDistance;
@end

