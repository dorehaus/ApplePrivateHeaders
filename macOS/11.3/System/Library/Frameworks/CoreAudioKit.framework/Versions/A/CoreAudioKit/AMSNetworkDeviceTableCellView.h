/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSProgressIndicator, NSImageView, NSButton, NSTextField;

@interface AMSNetworkDeviceTableCellView : NSTableCellView {

	NSProgressIndicator* progressIndicator;
	NSImageView* indicatorImage;
	NSButton* deviceCheckbox;
	NSTextField* deviceNameLabel;

}

@property (readonly) NSProgressIndicator * progressIndicator; 
@property (readonly) NSImageView * indicatorImage; 
@property (readonly) NSButton * deviceCheckbox; 
@property (readonly) NSTextField * deviceNameLabel; 
-(id)initWithFrame:(CGRect)arg1 ;
-(NSProgressIndicator *)progressIndicator;
-(NSImageView *)indicatorImage;
-(NSButton *)deviceCheckbox;
-(NSTextField *)deviceNameLabel;
@end

