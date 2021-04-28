/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BatteryUIKit.framework/Versions/A/BatteryUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSImageView, NSTextField;

@interface BUIViewController : NSObject {

	char powerChimeView;
	NSImageView* _batteryImageView;
	NSTextField* _batteryImageLabel;
	double _redStateTriggerLevel;

}

@property (assign) char powerChimeView; 
@property (retain) NSImageView * batteryImageView;               //@synthesize batteryImageView=_batteryImageView - In the implementation block
@property (retain) NSTextField * batteryImageLabel;              //@synthesize batteryImageLabel=_batteryImageLabel - In the implementation block
@property (getter=isHidden) char hidden; 
@property (assign) double redStateTriggerLevel;                  //@synthesize redStateTriggerLevel=_redStateTriggerLevel - In the implementation block
-(id)init;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(void)updateWithParameters:(id)arg1 ;
-(void)setRedStateTriggerLevel:(double)arg1 ;
-(void)setPowerChimeView:(char)arg1 ;
-(NSImageView *)batteryImageView;
-(char)powerChimeView;
-(NSTextField *)batteryImageLabel;
-(double)redStateTriggerLevel;
-(void)updateWithParametersWithPercentCharged:(double)arg1 useRed:(char)arg2 ;
-(id)initPowerChimeView;
-(void)updateWithParametersWithPercentCharged:(double)arg1 ;
-(void)setBatteryImageView:(NSImageView *)arg1 ;
-(void)setBatteryImageLabel:(NSTextField *)arg1 ;
@end
