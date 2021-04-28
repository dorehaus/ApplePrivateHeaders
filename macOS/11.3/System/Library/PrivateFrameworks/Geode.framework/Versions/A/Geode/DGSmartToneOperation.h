/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <Geode/DGSmartOperation.h>

@class PASmartToneAutoSettings;

@interface DGSmartToneOperation : DGSmartOperation {

	double _inputLight;
	SCD_Struct_DG34 _smartSettings;
	PASmartToneAutoSettings* _stats;
	double _inputLocalLight;
	double _offsetExposure;
	double _offsetContrast;
	double _offsetBrightness;
	double _offsetShadows;
	double _offsetHighlights;
	double _offsetBlack;
	double _offsetLocalLight;

}

@property (assign,nonatomic) double inputLight;                                   //@synthesize inputLight=_inputLight - In the implementation block
@property (assign,nonatomic) double inputExposure; 
@property (assign,nonatomic) double inputContrast; 
@property (assign,nonatomic) double inputBrightness; 
@property (assign,nonatomic) double inputShadows; 
@property (assign,nonatomic) double inputHighlights; 
@property (assign,nonatomic) double inputBlack; 
@property (assign,nonatomic) double inputLocalLight; 
@property (nonatomic,readonly) double inputRawHighlights; 
@property (assign,nonatomic) double offsetExposure;                               //@synthesize offsetExposure=_offsetExposure - In the implementation block
@property (assign,nonatomic) double offsetContrast;                               //@synthesize offsetContrast=_offsetContrast - In the implementation block
@property (assign,nonatomic) double offsetBrightness;                             //@synthesize offsetBrightness=_offsetBrightness - In the implementation block
@property (assign,nonatomic) double offsetShadows;                                //@synthesize offsetShadows=_offsetShadows - In the implementation block
@property (assign,nonatomic) double offsetHighlights;                             //@synthesize offsetHighlights=_offsetHighlights - In the implementation block
@property (assign,nonatomic) double offsetBlack;                                  //@synthesize offsetBlack=_offsetBlack - In the implementation block
@property (assign,nonatomic) double offsetLocalLight;                             //@synthesize offsetLocalLight=_offsetLocalLight - In the implementation block
@property (nonatomic,readonly) PASmartToneAutoSettings * statistics; 
+(id)attributes;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
+(char)supportsAutoCalculatedValues;
+(id)autoCalculatedInputKeys;
-(unsigned long long)hash;
-(PASmartToneAutoSettings *)statistics;
-(id)initWithOperation:(id)arg1 ;
-(void)resetOffsets;
-(id)settingsDictionary;
-(double)inputLight;
-(void)setInputExposure:(double)arg1 ;
-(double)inputExposure;
-(double)inputContrast;
-(void)setInputContrast:(double)arg1 ;
-(void)setInputLight:(double)arg1 ;
-(void)setInputBrightness:(double)arg1 ;
-(double)inputBrightness;
-(void)setInputShadows:(double)arg1 ;
-(double)inputShadows;
-(void)setInputHighlights:(double)arg1 ;
-(double)inputHighlights;
-(void)setInputBlack:(double)arg1 ;
-(double)inputBlack;
-(void)setInputLocalLight:(double)arg1 ;
-(double)inputLocalLight;
-(double)inputRawHighlights;
-(double)offsetBlack;
-(void)setOffsetBlack:(double)arg1 ;
-(double)offsetBrightness;
-(void)setOffsetBrightness:(double)arg1 ;
-(double)offsetContrast;
-(void)setOffsetContrast:(double)arg1 ;
-(double)offsetExposure;
-(void)setOffsetExposure:(double)arg1 ;
-(double)offsetHighlights;
-(void)setOffsetHighlights:(double)arg1 ;
-(double)offsetLocalLight;
-(void)setOffsetLocalLight:(double)arg1 ;
-(double)offsetShadows;
-(void)setOffsetShadows:(double)arg1 ;
-(char)isMigratable;
-(char)needsUpdatedAutoSettingsForOperationFactory;
-(void)updateAutoSettingsFromOperation:(id)arg1 ;
-(void)restoreAutoSettings:(id)arg1 currentAutoIdentifier:(id)arg2 ;
-(void)resetAllAutoSettingsToPending;
-(double)getAutoValueForInputKey:(id)arg1 ;
-(id)autoCalculatedSlaveInputKeysForMasterInputKey:(id)arg1 ;
-(char)applySettingsDictionary:(id)arg1 ;
-(void)_applyAutoSettings:(id)arg1 ;
-(void)_updateSettings;
-(void)updateAutoSettings:(id)arg1 ;
-(void)disableLocalLight;
@end

