/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/DGOperation.h>

@interface DGRAWReduceNoiseOperation : DGOperation {

	double _inputLNRAmount;
	double _inputCNRAmount;
	double _inputDetailAmount;

}

@property (assign,nonatomic) double inputLNRAmount;                 //@synthesize inputLNRAmount=_inputLNRAmount - In the implementation block
@property (assign,nonatomic) double inputCNRAmount;                 //@synthesize inputCNRAmount=_inputCNRAmount - In the implementation block
@property (assign,nonatomic) double inputDetailAmount;              //@synthesize inputDetailAmount=_inputDetailAmount - In the implementation block
@property (nonatomic,readonly) double filterLNRAmount; 
@property (nonatomic,readonly) double filterCNRAmount; 
+(id)attributes;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
-(id)init;
-(id)initWithOperation:(id)arg1 ;
-(id)defaultValueForInputKey:(id)arg1 ;
-(id)settingsDictionary;
-(double)inputLNRAmount;
-(double)inputCNRAmount;
-(double)inputDetailAmount;
-(char)isMigratable;
-(char)applySettingsDictionary:(id)arg1 ;
-(double)filterLNRAmount;
-(double)filterCNRAmount;
-(double)_filterLNRAmountFromUILNRAmount:(double)arg1 ;
-(double)_filterCNRAmountFromUICNRAmount:(double)arg1 ;
-(void)_legacyToFilterValuesForInputAmount:(double)arg1 offsetLNRAmount:(double)arg2 offsetCNRAmount:(double)arg3 offsetDetailAmount:(double)arg4 ;
-(double)_defaultLNRAmount;
-(double)_defaultCNRAmount;
-(void)setInputLNRAmount:(double)arg1 ;
-(void)setInputCNRAmount:(double)arg1 ;
-(void)setInputDetailAmount:(double)arg1 ;
@end

