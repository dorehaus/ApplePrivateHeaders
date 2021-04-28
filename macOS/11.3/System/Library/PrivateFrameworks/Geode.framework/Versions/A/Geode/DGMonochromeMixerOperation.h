/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/DGOperation.h>

@interface DGMonochromeMixerOperation : DGOperation {

	long long _inputType;
	double _inputRValue;
	double _inputGValue;
	double _inputBValue;

}

@property (assign,nonatomic) long long inputType;              //@synthesize inputType=_inputType - In the implementation block
@property (assign,nonatomic) double inputRValue;               //@synthesize inputRValue=_inputRValue - In the implementation block
@property (assign,nonatomic) double inputGValue;               //@synthesize inputGValue=_inputGValue - In the implementation block
@property (assign,nonatomic) double inputBValue;               //@synthesize inputBValue=_inputBValue - In the implementation block
+(id)attributes;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
-(id)init;
-(void)setNilValueForKey:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(long long)inputType;
-(void)setInputType:(long long)arg1 ;
-(double)inputRValue;
-(double)inputGValue;
-(double)inputBValue;
-(void)setInputRValue:(double)arg1 ;
-(void)setInputGValue:(double)arg1 ;
-(void)setInputBValue:(double)arg1 ;
@end
