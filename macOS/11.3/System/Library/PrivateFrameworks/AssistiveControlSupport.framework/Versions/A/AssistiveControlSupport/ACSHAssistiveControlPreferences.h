/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/AssistiveControlSupport-Structs.h>
#import <AssistiveControlSupport/ACSHPreferences.h>

@class NSMutableDictionary;

@interface ACSHAssistiveControlPreferences : ACSHPreferences {

	NSMutableDictionary* __colorsByThemeAndAttribute;

}

@property (retain) NSMutableDictionary * _colorsByThemeAndAttribute;                       //@synthesize _colorsByThemeAndAttribute=__colorsByThemeAndAttribute - In the implementation block
@property (assign,nonatomic) char showButtonLabels; 
@property (assign,nonatomic) unsigned long long panelPosition; 
@property (nonatomic,readonly) CGRect panelFrame; 
@property (nonatomic,readonly) unsigned long long desiredPanelWindowPosition; 
@property (nonatomic,readonly) CGRect desiredPanelWindowFrame; 
@property (assign,nonatomic) CGRect minimizedPanelFrame; 
@property (assign,nonatomic) char nonProportionalResizingEnabled; 
+(id)shared;
+(id)preferenceDomainForAssistiveControlType:(long long)arg1 ;
+(id)preferenceDefaults;
+(id)userDefaultsPreferencesSource;
-(void)setNonProportionalResizingEnabled:(char)arg1 ;
-(unsigned long long)toolbarSettingForToolbarIdentifier:(id)arg1 panelIdentifier:(id)arg2 productSupportType:(unsigned long long)arg3 ;
-(void)updateToolbarSetting:(unsigned long long)arg1 forToolbarIdentifier:(id)arg2 panelIdentifier:(id)arg3 productSupportType:(unsigned long long)arg4 ;
-(double)viewingZoomScaleForPanelUUID:(id)arg1 ;
-(char)viewingZoomScaleIsDefaultForPanelUUID:(id)arg1 ;
-(double)viewingAlphaForPanelUUID:(id)arg1 ;
-(double)viewingZoomNonProportionalFactorForPanelUUID:(id)arg1 returningHorizontalNotVertical:(char*)arg2 ;
-(void)setViewingZoomScale:(double)arg1 forPanelUUID:(id)arg2 ;
-(void)setViewingZoomNonProportionalFactor:(double)arg1 horizontalNotVertical:(char)arg2 forPanelUUID:(id)arg3 ;
-(void)setViewingAlpha:(double)arg1 forPanelUUID:(id)arg2 ;
-(void)setPanelPosition:(unsigned long long)arg1 ;
-(unsigned long long)panelPosition;
-(char)showButtonLabels;
-(id)colorForTheme:(unsigned long long)arg1 attributeColor:(unsigned long long)arg2 ;
-(id)initWithPreferencesSource:(id)arg1 ;
-(void)set_colorsByThemeAndAttribute:(NSMutableDictionary *)arg1 ;
-(void)setPreferencesSource:(id)arg1 ;
-(NSMutableDictionary *)_colorsByThemeAndAttribute;
-(id)_colorFromBundleNamed:(id)arg1 ;
-(id)_colorForTheme:(unsigned long long)arg1 attributeColor:(unsigned long long)arg2 ;
-(id)colorForTheme:(unsigned long long)arg1 attributeColor:(unsigned long long)arg2 baseColor:(id)arg3 prioritizeAdjustedColor:(char)arg4 ;
-(void)assistiveControlTypeChanged:(long long)arg1 ;
-(void)setShowButtonLabels:(char)arg1 ;
-(CGRect)panelFrame;
-(void)setPanelPosition:(unsigned long long)arg1 windowFrame:(CGRect)arg2 ;
-(unsigned long long)desiredPanelWindowPosition;
-(CGRect)desiredPanelWindowFrame;
-(void)setDesiredPanelWindowPosition:(unsigned long long)arg1 panelWindowFrame:(CGRect)arg2 ;
-(CGRect)minimizedPanelFrame;
-(void)setMinimizedPanelFrame:(CGRect)arg1 ;
-(char)nonProportionalResizingEnabled;
-(id)colorForAttributeColor:(unsigned long long)arg1 ;
-(id)colorForAttributeColor:(unsigned long long)arg1 baseColor:(id)arg2 prioritizeAdjustedColor:(char)arg3 ;
@end

