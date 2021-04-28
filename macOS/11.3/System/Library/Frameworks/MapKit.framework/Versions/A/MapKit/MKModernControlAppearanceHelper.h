/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSViewLayerContentScaleDelegate.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@protocol MKModernControlAppearanceView;
@class NSView, NSArray, NSVisualEffectView, NSColor, NSString;

@interface MKModernControlAppearanceHelper : NSObject <NSViewLayerContentScaleDelegate, CALayerDelegate> {

	NSView*<MKModernControlAppearanceView> _view;
	char _isLightMode;
	NSArray* _layers;
	NSVisualEffectView* _effectView;

}

@property (nonatomic,readonly) NSColor * colorActive; 
@property (nonatomic,readonly) NSColor * colorDefault; 
@property (nonatomic,readonly) NSColor * colorInactive; 
@property (nonatomic,readonly) NSColor * colorPressed; 
@property (nonatomic,copy) NSArray * layers;                                 //@synthesize layers=_layers - In the implementation block
@property (nonatomic,readonly) char isLightMode;                             //@synthesize isLightMode=_isLightMode - In the implementation block
@property (nonatomic,readonly) NSVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cornerRadius;
+(id)helperFor:(id)arg1 ;
+(double)dimensionLong;
+(double)dimensionShort;
-(id)initWithView:(id)arg1 ;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(NSArray *)layers;
-(void)setLayers:(NSArray *)arg1 ;
-(NSVisualEffectView *)effectView;
-(void)updateAppearance;
-(NSColor *)colorInactive;
-(NSColor *)colorActive;
-(NSColor *)colorPressed;
-(NSColor *)colorDefault;
-(char)isLightMode;
@end

