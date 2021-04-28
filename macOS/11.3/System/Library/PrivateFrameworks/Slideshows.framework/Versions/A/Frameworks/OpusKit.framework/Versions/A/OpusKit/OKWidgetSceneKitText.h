/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetSceneKitGeometry.h>

@class SCNText;

@interface OKWidgetSceneKitText : OKWidgetSceneKitGeometry {

	SCNText* _text;

}
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingChamferRadius:(double)arg1 ;
-(double)settingChamferRadius;
-(void)setSettingString:(id)arg1 ;
-(void)setSettingFont:(id)arg1 ;
-(void)setSettingWrapped:(char)arg1 ;
-(void)setSettingTruncationMode:(id)arg1 ;
-(void)setSettingContainerFrame:(CGRect)arg1 ;
-(void)setSettingAlignmentMode:(id)arg1 ;
-(void)setSettingExtrusionDepth:(double)arg1 ;
-(id)settingString;
-(id)settingFont;
-(char)settingWrapped;
-(id)settingTruncationMode;
-(CGSize)settingTextSize;
-(CGRect)settingContainerFrame;
-(id)settingAlignmentMode;
-(double)settingExtrusionDepth;
@end

