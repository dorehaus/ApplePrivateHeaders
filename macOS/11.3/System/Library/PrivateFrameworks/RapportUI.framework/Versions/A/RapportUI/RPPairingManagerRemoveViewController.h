/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/Versions/A/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSString, NSTextField, NSProgressIndicator;

@interface RPPairingManagerRemoveViewController : NSViewController {

	/*^block*/id _actionHandler;
	NSString* _deviceName;
	NSTextField* _messageField;
	NSTextField* _infoField;
	NSProgressIndicator* _progressSpinner;
	NSTextField* _progressLabel;

}

@property (nonatomic,copy) id actionHandler;                                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSTextField * messageField;                         //@synthesize messageField=_messageField - In the implementation block
@property (nonatomic,retain) NSTextField * infoField;                            //@synthesize infoField=_infoField - In the implementation block
@property (nonatomic,retain) NSProgressIndicator * progressSpinner;              //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (nonatomic,retain) NSTextField * progressLabel;                        //@synthesize progressLabel=_progressLabel - In the implementation block
-(void)viewWillAppear;
-(void)viewDidDisappear;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)handleCancelButton:(id)arg1 ;
-(NSTextField *)messageField;
-(NSProgressIndicator *)progressSpinner;
-(void)setMessageField:(NSTextField *)arg1 ;
-(void)setProgressSpinner:(NSProgressIndicator *)arg1 ;
-(NSTextField *)progressLabel;
-(void)setProgressLabel:(NSTextField *)arg1 ;
-(NSTextField *)infoField;
-(void)handleRemoveButton:(id)arg1 ;
-(void)setInfoField:(NSTextField *)arg1 ;
@end
