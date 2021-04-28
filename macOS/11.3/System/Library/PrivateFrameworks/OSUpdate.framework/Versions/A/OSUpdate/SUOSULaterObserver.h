/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSUpdate.framework/Versions/A/OSUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUOSULaterDelegate;
@class NSDate;

@interface SUOSULaterObserver : NSObject {

	char _isArmed;
	NSDate* _estimatedFireDate;
	id<SUOSULaterDelegate> _delegate;

}

@property (assign) char isArmed;                                 //@synthesize isArmed=_isArmed - In the implementation block
@property (retain) NSDate * estimatedFireDate;                   //@synthesize estimatedFireDate=_estimatedFireDate - In the implementation block
@property (__weak) id<SUOSULaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SUOSULaterDelegate>)delegate;
-(void)setDelegate:(id<SUOSULaterDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)disarmLaterObserver;
-(char)isArmed;
-(NSDate *)estimatedFireDate;
-(void)setIsArmed:(char)arg1 ;
-(void)setEstimatedFireDate:(NSDate *)arg1 ;
-(char)onACPower;
-(void)armObserver;
-(char)isDarkWake;
-(char)isMaintenanceDarkWake;
@end
