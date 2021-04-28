/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OKSettingsSupport.h>

@class SCNMaterial, OKWidgetSceneKitView, NSMutableDictionary, NSString;

@interface OKWidgetSceneKitMaterialProxy : NSObject <OKSettingsSupport> {

	SCNMaterial* _material;
	OKWidgetSceneKitView* _widgetScene;
	NSMutableDictionary* _materialPropertiesToApply;

}

@property (nonatomic,retain,readonly) SCNMaterial * material;              //@synthesize material=_material - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(id)proxyForMaterial:(id)arg1 widgetScene:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(SCNMaterial *)material;
-(id)settingName;
-(void)setSettingName:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)loadMaterialProperties;
-(id)initWithMaterial:(id)arg1 widgetScene:(id)arg2 ;
-(id)settingAmbient;
-(void)setSettingAmbient:(id)arg1 ;
-(id)settingDiffuse;
-(void)setSettingDiffuse:(id)arg1 ;
-(char)settingDoubleSided;
-(void)setSettingDoubleSided:(char)arg1 ;
-(id)settingEmission;
-(void)setSettingEmission:(id)arg1 ;
-(id)settingLightingModelName;
-(void)setSettingLightingModelName:(id)arg1 ;
-(char)settingLitPerPixel;
-(void)setSettingLitPerPixel:(char)arg1 ;
-(char)settingLocksAmbientWithDiffuse;
-(void)setSettingLocksAmbientWithDiffuse:(char)arg1 ;
-(id)settingMultiply;
-(void)setSettingMultiply:(id)arg1 ;
-(id)settingNormal;
-(void)setSettingNormal:(id)arg1 ;
-(id)settingReflective;
-(void)setSettingReflective:(id)arg1 ;
-(double)settingShininess;
-(void)setSettingShininess:(double)arg1 ;
-(id)settingSpecular;
-(void)setSettingSpecular:(id)arg1 ;
-(double)settingTransparency;
-(void)setSettingTransparency:(double)arg1 ;
-(long long)settingTransparencyMode;
-(void)setSettingTransparencyMode:(long long)arg1 ;
-(id)settingTransparent;
-(void)setSettingTransparent:(id)arg1 ;
-(char)settingWritesToDepthBuffer;
-(void)setSettingWritesToDepthBuffer:(char)arg1 ;
@end
