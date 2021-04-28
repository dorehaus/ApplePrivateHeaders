/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/IPAOperation.h>
#import <libobjc.A.dylib/DGAutoCalculable.h>

@class NSString;

@interface IPASmartBlackAndWhiteOperation : IPAOperation <DGAutoCalculable> {

	double _inputBlackAndWhite;
	double _offsetStrength;
	double _offsetNeutralGamma;
	double _offsetTone;
	double _offsetHue;
	double _offsetGrain;

}

@property (assign,nonatomic) double inputBlackAndWhite;              //@synthesize inputBlackAndWhite=_inputBlackAndWhite - In the implementation block
@property (assign,nonatomic) double offsetStrength;                  //@synthesize offsetStrength=_offsetStrength - In the implementation block
@property (assign,nonatomic) double offsetNeutralGamma;              //@synthesize offsetNeutralGamma=_offsetNeutralGamma - In the implementation block
@property (assign,nonatomic) double offsetTone;                      //@synthesize offsetTone=_offsetTone - In the implementation block
@property (assign,nonatomic) double offsetHue;                       //@synthesize offsetHue=_offsetHue - In the implementation block
@property (assign,nonatomic) double offsetGrain;                     //@synthesize offsetGrain=_offsetGrain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributes;
+(id)inputKeys;
+(id)outputKeys;
+(char)supportsAutoCalculatedValues;
+(id)autoCalculatedInputKeys;
-(void)setNilValueForKey:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(id)settingsDictionary;
-(char)isMigratable;
-(char)applySettingsDictionary:(id)arg1 ;
-(void)_applyAutoSettings:(id)arg1 ;
-(double)inputBlackAndWhite;
-(double)offsetStrength;
-(double)offsetNeutralGamma;
-(double)offsetTone;
-(double)offsetHue;
-(double)offsetGrain;
-(void)setInputBlackAndWhite:(double)arg1 ;
-(void)setOffsetStrength:(double)arg1 ;
-(void)setOffsetNeutralGamma:(double)arg1 ;
-(void)setOffsetTone:(double)arg1 ;
-(void)setOffsetHue:(double)arg1 ;
-(void)setOffsetGrain:(double)arg1 ;
@end

