/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IOBluetoothUI/IOBluetoothUI-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, NSColor, NSTableCellView;

@interface IOBluetoothUI_BatteryControl : NSView {

	NSImage* batteryImage;
	NSImage* levelFillImage;
	NSColor* color;
	long long tag;
	NSTableCellView* BT_row;

}

@property (assign) NSTableCellView * BT_row; 
@property (copy) NSColor * color; 
@property (readonly) long long tag; 
+(id)_batteryImageWithName:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)tag;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(id)getDevice;
-(float)batteryPercent:(id)arg1 ;
-(void)drawMask:(id)arg1 toRect:(CGRect)arg2 withColor:(id)arg3 ;
-(NSTableCellView *)BT_row;
-(void)setBT_row:(NSTableCellView *)arg1 ;
@end

