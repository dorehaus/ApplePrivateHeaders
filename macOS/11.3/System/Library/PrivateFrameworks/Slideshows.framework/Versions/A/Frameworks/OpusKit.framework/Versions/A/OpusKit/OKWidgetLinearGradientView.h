/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetLinearGradientViewProxyExports.h>

@class OFLinearGradientView, NSArray;

@interface OKWidgetLinearGradientView : OKWidgetView <OKWidgetLinearGradientViewProxyExports> {

	OFLinearGradientView* _gradientView;
	NSArray* _gradientColors;
	NSArray* _gradientLocations;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay:(char)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(void)updateGradient;
-(id)settingGradientLocations;
-(void)setSettingGradientLocations:(id)arg1 ;
-(id)settingGradientColors;
-(void)setSettingGradientColors:(id)arg1 ;
-(char)settingOpaque;
-(CGPoint)settingStartPoint;
-(void)setSettingStartPoint:(CGPoint)arg1 ;
-(CGPoint)settingEndPoint;
-(void)setSettingEndPoint:(CGPoint)arg1 ;
-(void)setSettingOpaque:(char)arg1 ;
@end
