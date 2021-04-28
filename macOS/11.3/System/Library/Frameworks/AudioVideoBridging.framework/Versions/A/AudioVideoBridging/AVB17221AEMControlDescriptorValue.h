/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AEMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AVB17221AEMControlDescriptorValue : AVB17221AEMObject <NSCopying> {

	unsigned short controlValueType;

}

@property (assign) unsigned short controlValueType; 
@property (nonatomic,readonly) unsigned long long valuesSize; 
@property (nonatomic,readonly) unsigned short numberOfValues; 
@property (nonatomic,readonly) unsigned long long currentValueSize; 
@property (nonatomic,copy) NSData * currentValueData; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)plistRepresentation;
-(char)updateWithPlistEntry:(id)arg1 ;
-(char)updateWithXML:(id)arg1 ;
-(id)xmlRepresentation;
-(unsigned short)controlValueType;
-(id)initWithValuePointer:(char**)arg1 valueType:(unsigned short)arg2 ;
-(unsigned short)numberOfValues;
-(unsigned long long)valuesSize;
-(char*)setValuesAtPointer:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)setControlValueType:(unsigned short)arg1 ;
-(id)objectsForSetCommandValuesData:(id)arg1 ;
-(char)updateWithValueDictionary:(id)arg1 ;
-(id)valueDictionary;
-(id)valueXMLElement;
-(char)updateWithValueXMLElement:(id)arg1 ;
-(unsigned long long)currentValueSize;
-(void)setCurrentValueData:(NSData *)arg1 ;
-(NSData *)currentValueData;
-(char)validControlValueType:(unsigned short)arg1 ;
-(id)valuesDataWithNewNumberValue:(id)arg1 atValueIndex:(unsigned short)arg2 ;
@end

