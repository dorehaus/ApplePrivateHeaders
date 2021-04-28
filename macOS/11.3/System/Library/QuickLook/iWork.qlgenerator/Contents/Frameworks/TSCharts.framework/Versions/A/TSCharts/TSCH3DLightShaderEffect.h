/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DShaderEffect.h>

@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect {

	unsigned long long _lightCount;

}
+(Class)stateClass;
+(void)createStateInEffectsStates:(id)arg1 ;
+(id)effectWithLightCount:(unsigned long long)arg1 ;
+(void)updatePackageState:(const LightingPackageShaderEffectState*)arg1 effectsStates:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)addVariables:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadLightPositionablesWithUploader:(id)arg1 effectsStates:(id)arg2 ;
-(void)uploadLightDirectionalWithUploader:(id)arg1 effectsStates:(id)arg2 ;
-(id)initWithLightCount:(unsigned long long)arg1 ;
@end
