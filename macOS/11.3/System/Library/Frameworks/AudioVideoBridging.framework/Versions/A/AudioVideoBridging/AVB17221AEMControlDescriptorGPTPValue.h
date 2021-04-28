/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class TSgPTPTime;

@interface AVB17221AEMControlDescriptorGPTPValue : AVB17221AEMControlDescriptorValue {

	unsigned long long _seconds;
	unsigned _nanoseconds;

}

@property (assign,nonatomic) unsigned long long seconds; 
@property (assign,nonatomic) unsigned nanoseconds;                    //@synthesize nanoseconds=_nanoseconds - In the implementation block
@property (nonatomic,copy) TSgPTPTime * gPTPTime; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)seconds;
-(unsigned)nanoseconds;
-(void)setSeconds:(unsigned long long)arg1 ;
-(TSgPTPTime *)gPTPTime;
-(id)debugLogStringWithIndentation:(id)arg1 ;
-(id)initWithValuePointer:(char**)arg1 valueType:(unsigned short)arg2 ;
-(unsigned short)numberOfValues;
-(unsigned long long)valuesSize;
-(char*)setValuesAtPointer:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)objectsForSetCommandValuesData:(id)arg1 ;
-(char)updateWithValueDictionary:(id)arg1 ;
-(id)valueDictionary;
-(id)valueXMLElement;
-(char)updateWithValueXMLElement:(id)arg1 ;
-(unsigned long long)currentValueSize;
-(void)setCurrentValueData:(id)arg1 ;
-(id)currentValueData;
-(char)validControlValueType:(unsigned short)arg1 ;
-(void)setNanoseconds:(unsigned)arg1 ;
-(void)setGPTPTime:(TSgPTPTime *)arg1 ;
@end

